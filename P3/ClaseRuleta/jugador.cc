#include <list>
#include <iostream>
#include <string>
#include <fstream>//For I/O file
#include <cstdlib>//for exit function
#include "jugador.h"
void Jugador::setApuestas(){
	apuestas_.clear();
	
	std::ifstream file;	
	
	file.open(Jugador::getDNI()+".txt");//);

	std::string stream;
	Apuesta a;
	
	if(!file.is_open()){
		exit(EXIT_FAILURE);
	}
	
	while(getline(file, stream, ',')){//Iterate the file
		
		a.tipo= std::atoi(stream.c_str());
		
		getline(file, stream, ',');
		a.valor=stream;
		
		getline(file, stream, '\n');
		a.cantidad= std::atoi(stream.c_str());
		
		apuestas_.push_back(a);
	}
	file.close();
}
