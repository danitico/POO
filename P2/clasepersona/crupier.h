#ifndef CRUPIER_H
#define CRUPIER_H
#include "persona.h"
class Crupier : public Persona{
	private:
		std::string codigo_;
	public:
		Crupier(std::string dni, std::string codigo, std::string nombre="", std::string apellidos="", std::string direccion="", std::string localidad="", std::string provincia="", std::string pais="") : Persona(dni, nombre, apellidos, direccion, localidad, provincia, pais){
			codigo_=codigo;
		}
		std::string getCodigo(){
			return codigo_;
		}
		void setCodigo(std::string codigo){
			codigo_=codigo;
		}
};		
#endif
