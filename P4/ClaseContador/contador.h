#ifndef CONTADOR_H
#define CONTADOR_H
#include <list>
class Contador{
	private:
		int n_, min_, max_, modificado_;
		std::list<int> undos;		
	public:
		int get();
		int getMin();
		int getMax();
		Contador(int minimo=0, int maximo=1000, int valor=0);
		Contador operator=(const Contador &c);
		Contador operator=(const int a);
		Contador operator++(void);
		Contador operator++(int);
		Contador operator--(void);
		Contador operator--(int);
		Contador operator+(const int a);
		Contador operator-(const int a);
		friend Contador operator+(int a, Contador c);
		friend Contador operator-(int a, Contador c);
		bool undo(int n=1);
};
#endif
