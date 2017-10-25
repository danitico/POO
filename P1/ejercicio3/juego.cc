#include <iostream>
#include "dados.h"
int main(){
	Dados d;
	
	d.lanzamiento();
	
	std::cout<<"Dado 1= "<<d.getDado1()<<std::endl;
	std::cout<<"Dado 2= "<<d.getDado2()<<std::endl;
	
	std::cout<<"La suma de los dos es= "<<d.getSuma()<<std::endl;
	
	std::cout<<"Introduzca un numero para el dado 1\n";
	int n1=0;	
	std::cin>>n1;
	
	if(d.setDado1(n1)==false){
		std::cout<<"El dado 1 no se ha modificado\n";
	}

	std::cout<<"Introduzca un numero para el dado 2\n";
	int n2=0;	
	std::cin>>n2;
	
	if(d.setDado2(n2)==false){
		std::cout<<"El dado 2 no se ha modificado\n";
	}
	
	std::cout<<"La suma de los dos es= "<<d.getSuma()<<std::endl;
}
