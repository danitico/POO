#ifndef FUNCIONES_H
#define FUNCIONES_H
/*
 * TAD Dados
 * DESCRIPCIÓN El TAD Dados representa el lanzamiento de dos dados
 * OPERACIONES 
 */
class Dados{
	private:
		int d1_, d2_, l1_, l2_; 
      int suma1_, suma2_;
		int v1_[5], v2_[5];
	public:
		Dados();
		/*
		 *	PROC lanzamiento() DEV ()
		 *	REQUIERE True
		 *	MODIFICA d1_, d2_
		 *	EFECTOS Simula el lanzamiento de dos dados con la obtención de números pseudoaleatorios
		 */
		void lanzamiento();
		/*
		 *	PROC getLanzamientos() DEV (int)
		 *	REQUIERE True
		 *	MODIFICA 0
		 *	EFECTOS Devuelve el número de lanzamientos
		 */		
		int getLanzamientos();
		/*
		 *	PROC getLanzamientos1() DEV (int)
		 *	REQUIERE True
		 *	MODIFICA 0
		 *	EFECTOS Devuelve el número de lanzamientos del dado 1
		 */		
		int getLanzamientos1();
		/*
		 *	PROC getLanzamientos2() DEV (int)
		 *	REQUIERE True
		 *	MODIFICA 0
		 *	EFECTOS Devuelve el número de lanzamientos del dado 2
		 */
		int getLanzamientos2();
		/*
		 *	PROC getDado1() DEV (int)
		 *	REQUIERE True
		 *	MODIFICA 0
		 *	EFECTOS Devuelve el número del dado 1
		 */
		int getDado1();
		/*
		 *	PROC getDado2() DEV (int)
		 *	REQUIERE True
		 *	MODIFICA 0
		 *	EFECTOS Devuelve el número del dado 2
		 */
		int getDado2();
		/*
		 *	PROC setDado1(n) DEV (true ó false)
		 *	REQUIERE n este entre 0 y 6
		 *	MODIFICA d1_ 
		 *	EFECTOS Modifica el dato privado d1_ con el parámetro
		 */
		bool setDado1(int n);
		/*
		 *	PROC setDado2(n) DEV (true ó false)
		 *	REQUIERE n este entre 0 y 6
		 *	MODIFICA d2_ 
		 *	EFECTOS Modifica el dato privado d2_ con el parámetro
		 */		
		bool setDado2(int n);
		/*
		 *	PROC getSuma() DEV (int)
		 *	REQUIERE TRUE
		 *	MODIFICA 0 
		 *	EFECTOS Devuelve la suma de los dos dados
		 */
		int getSuma();
		/*
		 *	PROC getMedia1() DEV (float)
		 *	REQUIERE TRUE
		 *	MODIFICA 0 
		 *	EFECTOS Devuelve la media de todos los lanzamientos del dado 1
		 */
		float getMedia1();
		/*
		 *	PROC getMedia2() DEV (float)
		 *	REQUIERE TRUE
		 *	MODIFICA 0 
		 *	EFECTOS Devuelve la media de todos los lanzamientos del dado 2
		 */
		float getMedia2();
		/*
		 *	PROC almacenad1(number) DEV ()
		 *	REQUIERE TRUE
		 *	MODIFICA v1_  
		 *	EFECTOS Guarda los 5 últimos lanzamientos del dado 1
		 */
		void almacenad1(int number);
		/*
		 *	PROC almacenad2(number) DEV ()
		 *	REQUIERE TRUE
		 *	MODIFICA v2_  
		 *	EFECTOS Guarda los 5 últimos lanzamientos del dado 2
		 */
		void almacenad2(int number);
		/*
		 *	PROC getUltimos1(v[]) DEV ()
		 *	REQUIERE TRUE
		 *	MODIFICA 0
		 *	EFECTOS Imprime los últimos 5 lanzamientos del dado 1
		 */		
		void getUltimos1(int *v);
		/*
		 *	PROC getUltimos2(v[]) DEV ()
		 *	REQUIERE TRUE
		 *	MODIFICA 0
		 *	EFECTOS Imprime los últimos 5 lanzamientos del dado 2
		 */
		void getUltimos2(int *v);
		/*
		 *	PROC getDiferencia() DEV (int)
		 *	REQUIERE TRUE
		 *	MODIFICA 0
		 *	EFECTOS Devuelve la diferencia entre los dos dados
		 */
		int getDiferencia();
};		
#endif
