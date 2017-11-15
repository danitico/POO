#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
bool ascendente(int i, int j){
	return i<j;
}
bool descendente(int i, int j){
	return i>j;
}
int main(){
	srand(time(NULL));
	std::vector<int> array(10);
	int opcion=0;
		
	std::cout<<"Sin ordenar\n";
	for(int i=0; i<array.size(); i++){
		array[i]=rand()%10;
		std::cout<<"v["<<i<<"]="<<array[i]<<" ";
	}
	std::cout<<"\n";

	std::cout<<"1.Ordenar de manera ascendente\n";
	std::cout<<"2.Ordenar de manera descendente\n";
	std::cout<<"Introduce 1 ó 2\n";
	std::cin>>opcion;

	if(opcion==1){
		std::sort(array.begin(), array.end(), ascendente);
	}
	else{
		std::sort(array.begin(), array.end(), descendente);
	}
	
	std::cout<<"Ordenado\n";
	for(int i=0; i<array.size(); i++){
		std::cout<<"v["<<i<<"]="<<array[i]<<" ";
	}
	std::cout<<"\n";
}
