#include<iostream>

int main(){
	
	std::cout<<"ingresaste un entero:";
	int value;
	std::cin >> value;
	
	if(value >= 0){
		std::cout << value << "es numero positivo o cero \n";
		std::cout << "el doble de este numero es" << value * 2 << '\n';
		
	}
	else
	{
		
		std::cout<< value << "es un numero negativo\n";
		std::cout<<"el numero positivo de este numero es" << -value << '\n';
		
	}
	
	return 0;
}