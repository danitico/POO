#include <list>
#include "ruleta.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <string>
Ruleta::Ruleta(Crupier crupier){
	srand(time(NULL));
	bola_=(-1);
	banca_=1000000;
	crupier_=crupier;
}
bool Ruleta::setBanca(int banca){
	if(banca<0){
		return false;
	}
	else{
		banca_=banca;
		return true;
	}
}
bool Ruleta::setBola(int numero){
	if(numero<0 || numero>36){
		return false;
	}
	else{
		bola_=numero;
		return true;
	}
}
bool Ruleta::addJugador(Jugador jugador){
	std::list<Jugador>::iterator i;
	
	i=std::begin(jugadores_);
	
	for(; i!=jugadores_.end(); i++){
		if(i->getDNI()==jugador.getDNI()){
			return false;
		}
	}
	
	std::ifstream file(jugador.getDNI() + ".txt");
		if(file){
			file.close();
			jugadores_.push_back(jugador);
			return true;
		}
		else{
			file.open(jugador.getDNI() + ".txt");
			file.close();
			jugadores_.push_back(jugador);
			return true;
		}
}
void Ruleta::giraRuleta(){
	bola_=rand()%(37);
}
int Ruleta::deleteJugador(std::string DNI){
	std::list<Jugador>::iterator i;
	
	i=std::begin(jugadores_);

	if(jugadores_.empty()){
		return -1;
	}
	
	for(; i!=jugadores_.end(); i++){
		if(i->getDNI()==DNI){
			jugadores_.erase(i);
			return 1;
		}
	}
	return -2;
}
int Ruleta::deleteJugador(Jugador jugador){
	std::list<Jugador>::iterator j;
	
	j=std::begin(jugadores_);
	
	if(jugadores_.empty()){
		return -1;
	}
	
	for(; j!=jugadores_.end(); j++){
		if(j->getDNI()==jugador.getDNI()){
			jugadores_.erase(j);
			return 1;
		}
	}
	return -2;
}
void Ruleta::escribeJugadores(){
	std::ofstream file;
	
	file.open("jugadores.txt");
	
	for(std::list<Jugador>::iterator k=std::begin(jugadores_); k!=jugadores_.end(); k++){
		file<<k->getDNI()<<","<<k->getCodigo()<<","<<k->getNombre()<<","<<k->getApellidos()<<","<<k->getDireccion()<<","<<k->getLocalidad()<<","<<k->getProvincia()<<","<<k->getPais()<<","<<k->getDinero()<<"\n";
	}
	
	file.close();
}
void Ruleta::leeJugadores(){
	jugadores_.clear();
	
	std::ifstream file;
	
	file.open("jugadores.txt");
	
	Jugador aux("ejemplo", "ejemplo");
	std::string stream;
	
	while(getline(file, stream, ',')){
		
		aux.Jugador::setDNI(stream);
		
		getline(file, stream, ',');
		aux.Jugador::setCodigo(stream);
	
		getline(file, stream, ',');
		aux.Jugador::setNombre(stream);
	
		getline(file, stream, ',');
		aux.Jugador::setApellidos(stream);

		getline(file, stream, ',');
		aux.Jugador::setDireccion(stream);

		getline(file, stream, ',');
		aux.Jugador::setLocalidad(stream);

		getline(file, stream, ',');
		aux.Jugador::setProvincia(stream);

		getline(file, stream, ',');
		aux.Jugador::setPais(stream);
	
		getline(file, stream, '\n');
		aux.Jugador::setDinero(atoi(stream.c_str()));
	
		jugadores_.push_back(aux);
	}
	
	file.close();
}
void Ruleta::getPremios(){
	std::list<Jugador>::iterator i=std::begin(jugadores_);
	std::list<Apuesta> apuesta;
	
	
	for(; i!=jugadores_.end(); i++){
		i->setApuestas();
		apuesta=i->getApuestas();
		
		std::list<Apuesta>::iterator j=std::begin(apuesta);


		for(; j!=apuesta.end(); j++){//continue
			//std::cout<<j->cantidad<<"\n";
			
			if(j->valor=="alto"){
				if(getBola()>18){
					i->setDinero(i->getDinero() + j->cantidad);
					setBanca(getBanca() - j->cantidad);
				}
				else{
					i->setDinero(i->getDinero() - j->cantidad);
					setBanca(getBanca() + j->cantidad);
				}
				continue;
			}
			
			if(j->valor=="bajo"){
				if(getBola()>0 && getBola()<19){
					i->setDinero(i->getDinero() + j->cantidad);
					setBanca(getBanca() - j->cantidad);
				}
				else{
					i->setDinero(i->getDinero() - j->cantidad);
					setBanca(getBanca() + j->cantidad);
					//std::cout<<"hola4\n";
				}
				continue;
			}
			
			if(j->valor=="rojo"){
				if(getBola()==1 || getBola()==3 || getBola()==5 || getBola()==7 || getBola()==9 || getBola()==12 || getBola()==14 || getBola()==16 || getBola()==18 || getBola()==19 || getBola()==21 || getBola()==23 || getBola()==25 || getBola()==27 || getBola()==30 || getBola()==32 || getBola()==34 || getBola()==36){
					i->setDinero(i->getDinero() + j->cantidad);
					setBanca(getBanca() - j->cantidad);				}
				else{
					i->setDinero(i->getDinero() - j->cantidad);
					setBanca(getBanca() + j->cantidad);
					//std::cout<<"hola2\n";
				}
				continue;
			}					
		
			if(j->valor=="negro"){
				if(getBola()==2 || getBola()==4 || getBola()==6 || getBola()==8 || getBola()==10 || getBola()==11 || getBola()==13 || getBola()==15 || getBola()==17 || getBola()==20 || getBola()==22 || getBola()==24 || getBola()==26 || getBola()==28 || getBola()==29 || getBola()==31 || getBola()==33 || getBola()==35){
					i->setDinero(i->getDinero() + j->cantidad);
					setBanca(getBanca() - j->cantidad);
				}
				else{
					i->setDinero(i->getDinero() - j->cantidad);
					setBanca(getBanca() + j->cantidad);
				}
				continue;
			}
			if(j->valor=="par"){
				if(getBola()%2==0 && getBola()!=0){
					i->setDinero(i->getDinero() + j->cantidad);
					setBanca(getBanca() - j->cantidad);
				}
				else{
					i->setDinero(i->getDinero() - j->cantidad);
					setBanca(getBanca() + j->cantidad);
					//std::cout<<"hola3\n";
				}
				continue;
			}
	
			if(j->valor=="impar"){
				if(getBola()%2!=0){
					i->setDinero(i->getDinero() + j->cantidad);
					setBanca(getBanca() - j->cantidad);
				}
				else{
					i->setDinero(i->getDinero() - j->cantidad);
					setBanca(getBanca() + j->cantidad);
				}
				continue;
			}

			if(j->valor==std::to_string( getBola() )){
				i->setDinero(i->getDinero() + j->cantidad*35);
				setBanca(getBanca() - j->cantidad*35);
				continue;
			}
			if(j->valor!=std::to_string( getBola() )){
				i->setDinero(i->getDinero() - j->cantidad);
				setBanca(getBanca() + j->cantidad);
				//std::cout<<"hola1\n";
				continue;
			}
	   }	
	}
}
void getEstadoRuleta(int &nj, int &suma, int &n, int &beneficio);
