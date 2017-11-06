#ifndef RULETA_H
#define RULETA_H
#include "persona.h"
#include "crupier.h"
#include "jugador.h"
/*
 * TAD Ruleta
 * DESCRIPCIÓN El TAD Ruleta representa la información
 * y datos relacionados con una ruleta francesa
 * OPERACIONES 
 */
class Ruleta{
	private:
		int banca_, bola_;
		std::list<Jugador> jugadores_;
		Crupier crupier_{"ejemplo", "ejemplo"};
	public:
		Ruleta(Crupier crupier);//
		/*
		 *	PROC getBanca() DEV (int banca_)
		 *	REQUIERE True
		 *	MODIFICA 0
		 *	EFECTOS Devuelve la cadena banca_
		 */
		inline int getBanca() const {return banca_;}
		/*
		 *	PROC getBola() DEV (int bola_)
		 *	REQUIERE True
		 *	MODIFICA 0
		 *	EFECTOS Devuelve la cadena bola_
		 */		
		inline int getBola() const {return bola_;}
		/*
		 *	PROC setBanca(int banca) DEV (True ó False)
		 *	REQUIERE banca > 0
		 *	MODIFICA banca_ 
		 *	EFECTOS Si banca es mayor de 0, se modifica el dato privado con el valor del parámetro
		 *         y la función devuelve true. En el caso contrario, la función devuelve false y
		 *         no se modifica nada.
		 */
		bool setBanca(int banca);
		/*
		 *	PROC setBola(int numero) DEV (True ó False)
		 *	REQUIERE numero >= 0 && numero <=36
		 *	MODIFICA bola_ 
		 *	EFECTOS Si numero es mayor o igual que 0 y menor o igual que 36, se modifica el dato privado con el valor del parámetro
		 *         y la función devuelve true. En el caso contrario, la función devuelve false y
		 *         no se modifica nada.
		 */
		bool setBola(int numero);
		/*
		 *	PROC getCrupier() DEV (crupier_)
		 *	REQUIERE True
		 *	MODIFICA 0 
		 *	EFECTOS Devuelve el objeto crupier_
		 */
		inline Crupier getCrupier() const {return crupier_;}
		/*
		 *	PROC setCrupier(Crupier crupier) DEV ()
		 *	REQUIERE True
		 *	MODIFICA crupier_ 
		 *	EFECTOS El dato privado crupier_ recibe el valor del parámetro
		 */
		inline void setCrupier(Crupier crupier){crupier_=crupier;}
		/*
		 *	PROC getJugadores() DEV (jugadores_)
		 *	REQUIERE True
		 *	MODIFICA 0 
		 *	EFECTOS Devuelve la lista jugadores_
		 */
		inline std::list<Jugador> getJugadores() const {return jugadores_;}
		/*
		 *	PROC addJugador(Jugador jugador) DEV (True ó False)
		 *	REQUIERE True
		 *	MODIFICA jugadores_ 
		 *	EFECTOS Si el objeto pasado por parámetro está en la lista, la función devuelve false. Si el objeto de tipo jugador 
		 * 		  no está en la lista, vemos si está el archivo de sus apuestas. Si se encuentra, no se borra el contenido, y
		 *			  y se hace un push a la lista y devuelve true. En el caso contrario, se crea un fichero y la función devuelve
		 *			  true.
		 */		
		bool addJugador(Jugador jugador);
		/*
		 *	PROC deleteJugador(string DNI) DEV (int)
		 *	REQUIERE True
		 *	MODIFICA 0 
		 *	EFECTOS La función recorre la lista buscando un objeto con ese DNI. Si la lista esta vacía, la función devuelve -1.
		 * 		  Si el objeto se encuentra dentro de la lista de jugadores, se borra ese objeto y se devuelve 1. Si el objeto
		 *			  no se encuentra en la lista, la función devuelve -2.
		 */		
		int deleteJugador(std::string DNI);
		/*
		 *	PROC deleteJugador(Jugador jugador) DEV (int)
		 *	REQUIERE True
		 *	MODIFICA 0 
		 *	EFECTOS La función recorre la lista buscando un objeto con el DNI del parámetro . Si la lista esta vacía, la función devuelve -1.
		 * 		  Si el objeto se encuentra dentro de la lista de jugadores, se borra ese objeto y se devuelve 1. Si el objeto
		 *			  no se encuentra en la lista, la función devuelve -2.
		 */		
		int deleteJugador(Jugador jugador);
		/*
		 *	PROC escribeJugadores() DEV ()
		 *	REQUIERE True
		 *	MODIFICA jugadores.txt 
		 *	EFECTOS Escribe los datos de los objetos de tipo Jugador de la lista en el fichero jugadores.txt
		 */
		void escribeJugadores();
		/*
		 *	PROC leeJugadores() DEV ()
		 *	REQUIERE Exista el fichero jugadores.txt
		 *	MODIFICA jugadores_ 
		 *	EFECTOS Lee los datos del fichero jugadores.txt jugador a jugador, y los guarda en un objeto de tipo Jugador. Estos objetos de tipo
		 *			  Jugador se añaden en la lista de jugadores_, la cual ha sido vaciada anteriormente.
		 */		
		void leeJugadores();
		/*
		 *	PROC giraRuleta() DEV ()
		 *	REQUIERE True
		 *	MODIFICA bola_ 
		 *	EFECTOS Calcula un número pseudoaleatorio entre 0 y 36. Simula el lanzamiento de una ruleta
		 */
		void giraRuleta();
		/*
		 *	PROC getPremios() DEV ()
		 *	REQUIERE True
		 *	MODIFICA banca_, dinero_ 
		 *	EFECTOS Recorre la lista de jugadores, y a su vez, recorre la lista de apuestas de cada jugador, las cuales se han obtenido de los
		 *			  ficheros de apuestas cada jugador.
		 *			  Al recorrer cada apuesta, vemos si ha acertado según el número de la bola que ha salido y vamos quitando o añadiendo
		 *			  dinero al dinero personal del jugador y a la banca. 
		 */		
		void getPremios();
};
#endif
