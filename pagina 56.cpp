#include <iostream>

int value{5};
int main(){
	int value{7};
	++value;
	
	--(::value);
	
	std::cout<<"valor de la variable local" << value << '\n';
	std::cout<<"valor de la variable global" << ::value << '\n';
	
	
	return 0;
}