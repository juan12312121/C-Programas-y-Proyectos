#include <iostream>
#include "constantss.h"

int main(){
	
	std::cout << "ingrese el radio:"; 
	int radius{};
	std::cin>> radius;
	
	std::cout << "la circuferencia es:" << 2.0 * radius * constantss::pi '\n';
	
	return 0;
}