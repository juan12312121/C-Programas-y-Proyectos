#include <iostream>

int main(){
	
	std::cout << "ingresaste un numero positivo";
	int num{};
	std::cin >> num;
	
	
	if (num < 0)
	std::cout<<"se ingreso un numero negativo. ahora lo hacemos positivo.\n";
	num = -num;
	
	std::cout << "tu ingresaste:" << num;
	
	return 0;
}