#include <iostream>

#define ENABLE_DEBUG

int getUserInput()
{
	
	ifdef ENABLE_DEBUG
	std::cerr <<"llamada a getUserInput () \n";
	#endif
	std::cout<<"ingresaste un numero";
	int x{};
	std::cin >> x;
	return x;
	
	
}

int main(){
	
	#ifdef ENABLE_DEBUG
	std::Cerr << "llamada a main () \n";
	#endif
	int x{getUserInput()};
	std::cout << "tu ingresaste:" << x;
	
	return 0; 
	
}