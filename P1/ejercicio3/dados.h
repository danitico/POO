#ifndef FUNCIONES_H
#define FUNCIONES_H
class Dados{
	private:
		int d1_, d2_, l1_, l2_; 
      int suma1_, suma2_;
		int v1_[5], v2_[5];
	public:
		Dados();
		void lanzamiento();
		int getLanzamientos();
		int getLanzamientos1();
		int getLanzamientos2();
		int getDado1();
		int getDado2();
		bool setDado1(int n);
		bool setDado2(int n);
		int getSuma();
		float getMedia1();
		float getMedia2();
		void almacenad1(int number);
		void almacenad2(int number);
		void getUltimos1(int *v);
		void getUltimos2(int *v);
		int getDiferencia();
};		
#endif
