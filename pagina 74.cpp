#include <iostream>

int main(){
	
	char source[]{"copia esta cadena!"};
	char dest[50];
	std::cout<<strcpy(dest, source);
	std::cout<< dest << '\n';
	
	return 0;
}