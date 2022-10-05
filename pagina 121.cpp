#include <iostream>

int main(){
	
	std::cout<<"ingrese un caracter";
	
	char ch{};
	std::cin>> ch;
	std::cout << ch << "el codigo ASCCI" << static_cast<int>(ch) << "\n";
	
return 0;	
}
