#include <iostream>

int readNumber()
{
	std::cout<<"por favor ingrese un numero";
	int x{};
	std::cin >> x;
	return 0;
	
}

void writeAnswer(int x)
{
	
	std::cout<<"El conciente es:" << x;
	
}

int main(){
	
	int x{ 0 };
	int y{ 0 };
	x = readNumber();
	x = readNumber();
	writeAnswer(x/y);
	
	return 0;
	
}