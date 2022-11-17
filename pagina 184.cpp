#include <iostream>
#include <typeinfo>

int main(){
	
	short a{4.0};
	short b{2};
	
	std::cout << typeid(a + b).name() << ' ' << a + b << '\n';
	
	return 0;
}