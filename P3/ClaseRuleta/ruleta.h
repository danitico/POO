#ifndef RULETA_H
#define RULETA_H
#include "persona.h"
#include "crupier.h"
#include "jugador.h"
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
		inline int getBanca() const {return banca_;}//
		/*
		 *	PROC getBola() DEV (int bola_)
		 *	REQUIERE True
		 *	MODIFICA 0
		 *	EFECTOS Devuelve la cadena bola_
		 */		
		inline int getBola() const {return bola_;}//
		/*
		 *	PROC setBanca(int banca) DEV (True ó False)
		 *	REQUIERE banca > 0
		 *	MODIFICA banca_ 
		 *	EFECTOS Si banca es mayor de 0, se modifica el dato privado con el valor del parámetro
		 *         y la función devuelve true. En el caso contrario, la función devuelve false y
		 *         no se modifica nada.
		 */
		bool setBanca(int banca);//
		/*
		 *	PROC setBola(int numero) DEV (True ó False)
		 *	REQUIERE numero >= 0 && numero <=36
		 *	MODIFICA bola_ 
		 *	EFECTOS Si numero es mayor o igual que 0 y menor o igual que 36, se modifica el dato privado con el valor del parámetro
		 *         y la función devuelve true. En el caso contrario, la función devuelve false y
		 *         no se modifica nada.
		 */
		bool setBola(int numero);//
		/*
		 *	PROC getCrupier() DEV (crupier_)
		 *	REQUIERE True
		 *	MODIFICA 0 
		 *	EFECTOS Devuelve el objeto crupier_
		 */
		inline Crupier getCrupier() const {return crupier_;}//
		/*
		 *	PROC setCrupier(Crupier crupier) DEV ()
		 *	REQUIERE True
		 *	MODIFICA crupier_ 
		 *	EFECTOS El dato privado crupier_ recibe el valor del parámetro
		 */
		inline void setCrupier(Crupier crupier){crupier_=crupier;}//
		inline std::list<Jugador> getJugadores() const {return jugadores_;}//
		bool addJugador(Jugador jugador);//existencia fichero
		int deleteJugador(std::string DNI);//
		int deleteJugador(Jugador jugador);//
		void escribeJugadores();//
		void leeJugadores();//
		void giraRuleta();//
		void getPremios();
};
#endif
