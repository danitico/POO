#include <cstdlib>
#include <ctime>
#include "dados.h"
Dados::Dados(){	
	d1_=1; 
	d2_=1;
	l1_=0, l2_=0;
	suma1_= suma2_= 0;
}
void Dados::lanzamiento(){
	int r1=0, r2=0;
	srand(time(NULL));
	r1=rand()%(6)+1;
	r2=rand()%(6)+1;
	d1_=r1;
	almacenad1(d1_);
	d2_=r2;
	almacenad2(d2_);
	l1_++; 
   l2_++;
   suma1_+=d1_;
   suma2_+=d2_;
}
int Dados::getDado1(){
	return d1_;
}
int Dados::getDado2(){
	return d2_;
}
bool Dados::setDado1(int n){
	if(n<1 || n>6){
		return false;
	}
	else{
		d1_=n;
		almacenad1(d1_);
		suma1_+=d1_;
		l1_++;
		return true;
	}
}
bool Dados::setDado2(int n){
	if(n<1 || n>6){
		return false;
	}
	else{
		d2_=n;
		almacenad2(d2_);
		suma2_+=d2_;
		l2_++;
		return true;
	}
}
int Dados::getSuma(){
	return d1_+d2_;
}

int Dados::getLanzamientos1(){
	return l1_;
}
int Dados::getLanzamientos2(){
	return l2_;
}
float Dados::getMedia1(){
	if(l1_==0){
		return 0.0;
	}
	else{
		return (float) suma1_/(l1_);
	}
}
float Dados::getMedia2(){
	if(l2_==0){
		return 0.0;
	}
	else{
		return (float) suma2_/l2_;
	}
}
void Dados::almacenad1(int number){
	for(int i=4; i>=1; i--){
		v1_[i]=v1_[i-1];
	}
	v1_[0]=number;
}
void Dados::almacenad2(int number){
	for(int i=4; i>=1; i--){
		v2_[i]=v2_[i-1];
	}
	v2_[0]=number;
}
void Dados::getUltimos1(int *v){
	for(int i=0; i<5; i++){
		v[i]=v1_[i];
	}
}
void Dados::getUltimos2(int *v){
	for(int i=0; i<5; i++){
		v[i]=v2_[i];
	}
}
int Dados::getDiferencia(){
	if(getDado1() > getDado2()){
		return getDado1() - getDado2();
	}
	else{
		return getDado2() - getDado1();
	}
}
