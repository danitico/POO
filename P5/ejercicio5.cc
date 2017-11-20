#include <iostream>
using namespace std;
template <class T> class MiClase{
	private:
		T x_, y_;
	public:
		MiClase(T a, T b){x_=a; y_=b;};
		T div(){return x_/y_;};
		T sum(){return x_+y_;};
		T res(){return x_-y_;};
		T x(){return x_*y_;};
};
int main(){
	MiClase <int> a(10,3);
	MiClase <double> b(3.3, 5.5);
	

	std::cout<<"INT----->"<<std::endl;
	std::cout<<"Suma "<<a.sum()<<std::endl;
	std::cout<<"Resta "<<a.res()<<std::endl;
	std::cout<<"Multiplicación "<<a.x()<<std::endl;
	std::cout<<"División "<<a.div()<<std::endl;
	
	std::cout<<"FLOAT----->"<<std::endl;
	std::cout<<"Suma "<<b.sum()<<std::endl;
	std::cout<<"Resta "<<b.res()<<std::endl;
	std::cout<<"Multiplicación "<<b.x()<<std::endl;
	std::cout<<"División "<<b.div()<<std::endl;
}
	
