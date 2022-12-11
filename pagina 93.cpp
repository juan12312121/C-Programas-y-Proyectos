#include<iostream>
#include <string view>

std::string_view askForName(){
	
	std::cout<< "cual es tu nombre\n";
	
	std::string str{};
	std::cin >> str;
	
	std::string_view view{str};
	
	std::cout << "hola" << view << '\n';
	
	return view;
}

int main(){
	
	std::string_view view{askForName()};
	
	std::cout<< "tu nombre es" << view << '\n';
	
	return 0;
}