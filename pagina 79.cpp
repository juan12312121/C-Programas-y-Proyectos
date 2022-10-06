#include <iostream>

int readNumber(int x){
	
	std::cout<<"por favor ingrese un numero:";
	std::cin >> x;
	return x;
	
}

void writeAnswer(int x){
	
	std::cout << "la suma es:" << x;
}

int main(){
	
	int x { 0 };
	readNumber(x);
	x = x + readNumber(x);
	writeAnswer(x);
	return 0;
}