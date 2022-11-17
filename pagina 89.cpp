#include "constants";
#include <iostream>

int main(){
	
	std::cout << "ingrese el radio";
	int radius{};
	std::cin >> radius;
	
	std::cout << "la circuferencia es:" << 2.0 * radius * constants::pi << '\n';
	
	return 0;
}
