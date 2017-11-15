#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
int main(){
	std::vector<int> array(10);
	
	for(int i=0; i<array.size(); i++){
		std::cout<<"v["<<i<<"]= ";
		std::cin>>array[i];
		std::cout<<"\n";
	}

	std::sort(array.begin(), array.end());	

	printf("Vector ordenado\n");

	for(int i=0; i<array.size(); i++){
		std::cout<<"v["<<i<<"]="<<array[i]<<std::endl;
	}
}
