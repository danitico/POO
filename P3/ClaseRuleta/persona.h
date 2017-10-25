#ifndef PERSONA_H
#define PERSONA_H
#include <string>
class Persona{
	private:
		std::string DNI_, Nombre_, apellidos_, direccion_, localidad_, provincia_, pais_;
	public:
		Persona(std::string dni, std::string nombre="", std::string apellidos="", std::string direccion="", std::string localidad="", std::string provincia="", std::string pais="");
		std::string getApellidosyNombre();
		std::string getNombre(){
			return Nombre_;
		}
		void setNombre(std::string nombre){
			Nombre_=nombre;
		}
		std::string getDNI(){
			return DNI_;
		}	
		void setDNI(std::string dni){
			DNI_=dni;
		}	
		std::string getApellidos(){
			return apellidos_;
		}	
		void setApellidos(std::string apellidos){
			apellidos_=apellidos;
		}
		std::string getDireccion(){
			return direccion_;
		}
		void setDireccion(std::string direccion){
			direccion_=direccion;
		}
		std::string getLocalidad(){
			return localidad_;
		}	
		void setLocalidad(std::string localidad){
			localidad_=localidad;
		}
		std::string getProvincia(){
			return provincia_;
		}
		void setProvincia(std::string provincia){
			provincia_=provincia;
		}
		std::string getPais(){
			return pais_;
		}
		void setPais(std::string pais){
			pais_=pais;
		}
};
#endif
