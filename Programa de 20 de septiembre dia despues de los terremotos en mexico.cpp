#include <iostream>

int add(int x, int y){
	
	return x + y;
}

void printResult(int z){
	
	std::cout<<" la respuesta es:" << z << "\n";
	
}

int getUserInput(){

std::cout<<"ingrese un numero:";
int x{};
std::cin>> x;
return --x;

}

int main(){
	int x{ getUserInput()};
	int y{ getUserInput()};

	std::cout<< x << " + " << y << "\n";
	
	int z { add(x, y)};
	printResult(z);
	
	return 0;
	
}
