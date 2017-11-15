#include "persona.h"
#include "jugador.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <string>
#include <algorithm>
bool descendente(Jugador &a, Jugador &b){
	return a.getDNI() > b.getDNI();
}
bool ascendente(Jugador &a, Jugador &b){
	return a.getDNI() < b.getDNI();
}
int main(){
	srand(time(NULL));
	int opcion=0;
	Jugador a("","");
	std::vector<Jugador> jugadores;

	std::cout<<"Sin ordenar\n";
	for(int i=0; i<4; i++){
		a.setDNI(std::to_string(rand()%10000000));
		a.setCodigo(std::to_string(rand()%1000));
		jugadores.push_back(a);
		std::cout<<"DNI-->"<<jugadores[i].getDNI()<<std::endl;
	}
	
	std::cout<<"1.Ordenar de manera ascendente\n";
	std::cout<<"2.Ordenar de manera descendente\n";
	std::cout<<"Introduce 1 ó 2\n";
	std::cin>>opcion;

	if(opcion==1){
		std::sort(jugadores.begin(), jugadores.end(), ascendente);
		std::cout<<"hola1\n";
	}
	if(opcion==2){
		std::sort(jugadores.begin(), jugadores.end(), descendente);
		std::cout<<"hola2\n";
	}
	
	std::cout<<"Ordenado\n";
	for(int i=0; i<jugadores.size(); i++){
		std::cout<<"DNI-->"<<jugadores[i].getDNI()<<std::endl;
	}
}
