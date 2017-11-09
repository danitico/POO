#ifndef CONTADOR_H
#define CONTADOR_H
class Contador{
	private:
		int n_, min_, max_;
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
		bool undo(int n);
};
friend Contador operator+(Contador c);
friend Contador operator-(Contador c);
#endif
