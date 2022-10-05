#include "constants.h"
#include <iostream>

int main(){
	
	std::cout"ingresaste el radio";
	int radius{};
	std::cin >> radius;
	
	double circumference {2.0 * radius * constants::pi};
	std::cout<<"la circunferencia es:" << circumference << "\n";
	
	return 0;
	
	
}
