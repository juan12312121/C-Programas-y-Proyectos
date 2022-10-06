#include <iostream>

int getUserInput()
{
	
	std::cerr << "llamada a getUserInput() \n";
	std::cout <<"llamada un numero:";
	int x{};
	std::cin >> x;
	return 0;
	
	
}

int main(){
	
	
	std::cerr <<"clamada a main()\n";
	int x{ getUserInput() };
	std:: cout<<"usted ingreso:" << x;
	
	return 0;
	
	
}