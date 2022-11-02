#include <iostream>

int main(){


std::cout<<"ingresa un entero";
int x{};
std::cin>> x;


std::cout<<"ingrese otro entero"
int y{};
std::cin>> y;

std::cout<<"el residuo es:" << x % y << '/n';

if((x % y) == 0){
	
	std::cout<< x << "es uniformamemnte divisible por" << y << '\n';
	else
	std::cout<< x <<"no es uniformemente divisible por"<< << '\n';
	 
	 return 0;
	
}


}