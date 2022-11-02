#include<iostream>

int main(){
	
	std::cout<<"ingrese un entero";
	int x{};
	std::cin >> x;
	
	std::cout<<"ingrese un entero";
	int y{};
	std::cin >> y;
	
	if(x == y)
	std::cout << x << "es igual" << y << '\n';
	if(x != y)
	std::cout << x << "no es igual" << y << '\n';
	if(x > y)
	std::cout << x << "es mayor" << y << '\n';
	if (x >= y)
	std::cout << x << "es mayor o igual que" << y << '\n';
	if (x <= y)
	std::cout << x << "es menor igual que" << y << '\n';
	

	return 0;

	
	
}