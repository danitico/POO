#include <iostream>
template <class T>
void printarray(T *v, const int &n){
	for(int i=0; i<n; i++){
		std::cout<<"v["<<i<<"]="<<v[i]<<std::endl;
	}
}
int main(){
	int a[4]={1,2,3,4};
	float b[4]={1.1, 1.2, 1.3, 1.4};
	char c[5]="dani";

	std::cout<<"INT--->\n";
	printarray(a, 4);
	std::cout<<"FLOAT--->\n";
	printarray(b, 4);
	std::cout<<"CHAR---->\n";
	printarray(c, 5);
}
