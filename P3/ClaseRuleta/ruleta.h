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
		inline int getBanca() const {return banca_;}//
		inline int getBola() const {return bola_;}//
		bool setBanca(int banca);//
		bool setBola(int numero);//
		inline Crupier getCrupier() const {return crupier_;}//
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
