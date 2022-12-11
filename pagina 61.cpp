#include <iostream>
#include <limits>

int main(){
	
	int age{};
	while(true){
		std::cout<< "ingrese su edad: ";
		std::cin >> age;
		
		if(std::cin.fail()){
			std::cin.clear();
			std::cin.ignore(std::numeri_limits<std::streamsize>::max(), '\n');
			continue;
		}
		std::cin.ignore(std::numeri_limits<std::streamsize>::max(), '\n');
		if(std::cin.gcount() > 1){
		continue;
		
			continue;
		}
		if (age <= 0)
		continue;
		break;
	}
	std::cout<< "ingresaste:" << age << '\n';
}