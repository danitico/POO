#ifndef JUGADOR_H
#define JUGADOR_H
#include "persona.h"
struct Apuesta{
	int tipo;
	std::string valor;
	int cantidad;
};
class Jugador : public Persona{
	private:
		int dinero_;
		std::string code_;
		std::list<Apuesta> apuestas_;
	public:
		Jugador(std::string dni, std::string code, std::string nombre="", std::string apellidos="", std::string direccion="", std::string localidad="", std::string provincia="", std::string pais="") : Persona(dni, nombre, apellidos, direccion, localidad, provincia, pais){
			code_=code;
			dinero_=1000;
		}
		std::string getCodigo() const{
			return code_;
		}
		void setCodigo(std::string code){
			code_=code;
		}
		int getDinero() const{
			return dinero_;
		}
		void setDinero(int dinero){
			dinero_=dinero;
		}
		std::list<Apuesta> getApuestas() const{
			return apuestas_;
		}
		void setApuestas();
};
#endif
