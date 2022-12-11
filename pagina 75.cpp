#include <iostream>

int main(){
	
	char source[]{"copia esta cadena!"};
	char dest[5];
	std::cout<<strcpy(dest, source);
	std::cout<< dest << '\n';
	
	return 0;
}