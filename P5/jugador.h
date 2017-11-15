#ifndef JUGADOR_H
#define JUGADOR_H
#include "persona.h"
#include <list>
struct Apuesta{
	int tipo;
	std::string valor;
	int cantidad;
};
/*
 * TAD Jugador
 * DESCRIPCIÓN El TAD Jugador hereda de la clase Persona. Representa la información
 * y datos de un jugador de una ruleta
 * OPERACIONES 
 */
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
		/*
		 *	PROC getCodigo() DEV (string code_)
		 *	REQUIERE True
		 *	MODIFICA 0
		 *	EFECTOS Devuelve la cadena code_
		 */
		std::string getCodigo() const{
			return code_;
		}
		/*
		 *	PROC setCodigo(string code) DEV ()
		 *	REQUIERE True
		 *	MODIFICA code_
		 *	EFECTOS El dato privado code_ recibe el valor del parámetro
		 */
		void setCodigo(std::string code){
			code_=code;
		}
		/*
		 *	PROC getDinero() DEV (int dinero_)
		 *	REQUIERE True
		 *	MODIFICA 0
		 *	EFECTOS Devuelve el entero dinero_
		 */
		int getDinero() const{
			return dinero_;
		}
		/*
		 *	PROC setDinero(int dinero) DEV ()
		 *	REQUIERE True
		 *	MODIFICA dinero_
		 *	EFECTOS El dato privado code_ recibe el valor del parámetro
		 */
		void setDinero(int dinero){
			dinero_=dinero;
		}
		/*
		 *	PROC getApuestas() DEV (list<Apuestas> apuestas_)
		 *	REQUIERE True
		 *	MODIFICA 0
		 *	EFECTOS El dato privado code_ recibe el valor del parámetro
		 */
		std::list<Apuesta> getApuestas() const{
			return apuestas_;
		}
		/*
		 *	PROC setApuestas() DEV ()
		 *	REQUIERE True
		 *	MODIFICA apuestas_
		 *	EFECTOS Guarda los datos de los ficheros de apuestas en una lista de apuestas
		 */
		void setApuestas();
};
#endif
