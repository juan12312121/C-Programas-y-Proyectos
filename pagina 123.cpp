#include <iostream>

int main(){
	
	
	std::cout<<"ingresaste un caracter:";
	
	char ch{};
	std::cin >> ch;
	std::cout << ch <<"tiene el codigo ASCCI" << static_cast<int>(ch) "\n";	
	
 	std::cin >> ch;
	std::cout << ch << "tiene el codigo ASCCI" << static_cast<int>(ch) "\n";
		
	
	return 0;	
}
