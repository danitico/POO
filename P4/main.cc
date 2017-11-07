#include <ruleta.h>
#include <crupier.h>
#include <jugador.h>
#include <persona.h>
#include <iostream>
void menu(int opcion);
void printstatus(int &nj, int &suma, int &n, int &beneficio);
int main(){
	Crupier crupier("1234", "0001");
	Ruleta ruleta(crupier);

	int opcion, nj, suma, n, beneficio;
	opcion=nj=suma=n=beneficio=0;

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

		menu(opcion);
	}
}
void menu(int opcion){
	switch(opcion){

		case 1:
			ruleta.leeJugadores();
			break;

		case 2:
			ruleta.escribeJugadores();
			break;

		case 3:
			ruleta.getEstadoRuleta(nj, suma, n, beneficio);
			ruleta.printstatus(nj, suma, n, beneficio);
			break;

		case 4:
			



		case 5:
			//datos del jugador a borrar
			ruleta.deleteJugador(std::string DNI);
			break;
		case 6:
			//Datos jugador
			if(ruleta.addJugador(jugador)) std::cout<<"éxito\n";
			else std::cout<<"failed to add it\n";
			break;


}
void printstatus(int &nj, int &suma, int &n, int &beneficio){
	printf("\t\tNumero jugadores ---->%i\n", nj);
	printf("\t\tDinero en la mesa --->%i\n", suma);
	printf("\t\tNumero lanzamientos ->%i\n", n);
	printf("\t\tSaldo Banca --------->%i\n", beneficio);
	//por favor DANIEL, hazlo en c++ hijo mio
}
