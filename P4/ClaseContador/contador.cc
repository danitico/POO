#include <algorithm>
#include <iostream>
#include "contador.h"
int Contador::get(){
	return n_;
}
int Contador::getMin(){
	return min_;
}
int Contador::getMax(){
	return max_;
}
Contador::Contador(int minimo, int maximo, int valor){
	min_=minimo;
	max_=maximo;
		
	if(!(valor>=minimo && valor <=maximo)) n_=0;
	else n_=valor;

	undos.push_back(n_);
}
Contador Contador::operator=(const Contador &c){
	n_=c.n_;
	if(n_<getMin()) n_=getMin();
	if(n_>getMax()) n_=getMax();
	undos.push_back(n_);
	return *this;
}
Contador Contador::operator=(const int a){
	n_+=a;
	if(n_<getMin()) n_=getMin();
	if(n_>getMax()) n_=getMax();
	undos.push_back(n_);
	return *this;
}
Contador Contador::operator++(void){
	n_++;
	if(n_<getMin()) n_=getMin();
	if(n_>getMax()) n_=getMax();
	undos.push_back(n_);
	return *this;
}
Contador Contador::operator++(int){
	Contador aux=*this;
	n_++;
	
	if(n_<getMin()) n_=getMin();
	if(n_>getMax()) n_=getMax();
	undos.push_back(n_);	
	return aux;
}
Contador Contador::operator--(void){
	n_--;
	if(n_<getMin()) n_=getMin();
	if(n_>getMax()) n_=getMax();
	undos.push_back(n_);
	return *this;
}
Contador Contador::operator--(int){
	Contador aux=*this;
	n_--;
	
	if(n_<getMin()) n_=getMin();
	if(n_>getMax()) n_=getMax();
	undos.push_back(n_);	
	return aux;
}
Contador Contador::operator+(const int a){
	Contador aux;
	
	aux.n_=n_+a;

	if(aux.n_<getMin()) aux.n_=getMin();
	if(aux.n_>getMax()) aux.n_=getMax();
	undos.push_back(n_);
	return aux;
}
Contador Contador::operator-(const int a){
	Contador aux;

	aux.n_=n_-a;

	if(aux.n_<getMin()) aux.n_=getMin();
	if(aux.n_>getMax()) aux.n_=getMax();
	undos.push_back(n_);	
	return aux;
}
Contador operator+(int a, Contador c){
	Contador aux;

	aux.n_=a+c.n_;

	if(aux.n_<c.getMin()) aux.n_=c.getMin();
	if(aux.n_>c.getMax()) aux.n_=c.getMax();

	return aux;
}
Contador operator-(int a, Contador c){
	Contador aux;

	aux.n_=a-c.n_;

	if(aux.n_<c.getMin()) aux.n_=c.getMin();
	if(aux.n_>c.getMax()) aux.n_=c.getMax();

	return aux;
}
bool Contador::undo(int n){
	if((int)undos.size()==1 || n<0 || (int)undos.size()==n) return false;

	else{
		std::list<int>::iterator it=undos.begin();
		std::advance(it, (int)undos.size() - n - 1);
		n_=*it;
		return true;
	}
}
