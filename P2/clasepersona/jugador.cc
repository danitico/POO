#include <list>
#include <iostream>
#include <fstream>//For I/O file
#include <cstdlib>//for exit function
#include "persona.h"
#include "jugador.h"
void setApuestas(std::string fichero){
	//apuestas_.clear();
	ifstream file;
	file.open(fichero);
	std::string stream;
	
	if(!file.is_open()){
		exit(EXIT_FAILURE);
	}
	
	while(getline(file, stream)){//Iterate the file
		std::istringstream ss(stream);
		std::string token;
		
		Lista a;//In this object i save the data from the file
		
		getline(ss, token, ',');
		a.tipo=std::stoi(token);
		
		getline(ss, token, ',');
		a.valor=token;
		
		getline(file, token);
		a.apostado=std::stoi(token);
		
		apuestas_.push_back(a);
	}
	
	file.close();
}

		
		
		
		
				
		
