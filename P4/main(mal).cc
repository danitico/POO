#include <list>
#include "ruleta.h"
#include "crupier.h"
#include "jugador.h"
#include "persona.h"
#include <iostream>
#include <unistd.h>
#include <cstdlib>
void printstatus(int &nj, int &suma, int &n, int &beneficio);
int main(){
	Crupier crupier("1234", "0001");
	Ruleta ruleta(crupier);
	Jugador jugador("","");
	std::string DNI;

	int opcion=0, nj=0, suma=0, n=0, beneficio=0;
	
	while(opcion!=7){
		std::cout<<"\t1.Cargar jugadores de jugadores.txt\n";
		std::cout<<"\t2.Guardar jugadores en jugadores.txt\n";
		std::cout<<"\t3.Estado de la ruleta y saldos\n";
		std::cout<<"\t4.Girar Ruleta y repartir premios\n";
		std::cout<<"\t5.Eliminar un jugador de la mesa\n";
		std::cout<<"\t6.Añadir jugador a la mesa\n";
		std::cout<<"\t7.Salir\n";
	
		std::cout<<"Opción---> ";
		std::cin>>opcion;
		//system("clear");		
		switch(opcion){

			case 1:
				ruleta.leeJugadores();
				break;

			case 2:
				ruleta.escribeJugadores();
				break;

			case 3:
				std::cout<<"hey\n";
				ruleta.getEstadoRuleta(nj, suma, n, beneficio);
				std::cout<<"hey1\n";
				printstatus(nj, suma, n, beneficio);
				std::cout<<"hey2\n";
				break;

			case 4:
			



			case 5:
				//datos DNI
				ruleta.deleteJugador(DNI);
				break;
			case 6:
				//Datos jugador sobrecarga extractor
				if(ruleta.addJugador(jugador)) std::cout<<"éxito\n";
				else std::cout<<"failed to add it\n";
				break;

			default:
				std::cout<<"Opción Incorrecta"<<std::endl;
				break;
		}
	}
	std::cout<<"Cerrado con éxito\n";		
}
void printstatus(int &nj, int &suma, int &n, int &beneficio){
	std::cout<<"\t\tNumero jugadores ---->"<<nj<<std::endl;
	std::cout<<"\t\tDinero en la mesa --->"<<suma<<std::endl;
	std::cout<<"\t\tNumero lanzamientos ->"<<n<<std::endl;
	std::cout<<"\t\tSaldo Banca --------->"<<beneficio<<std::endl;
}
