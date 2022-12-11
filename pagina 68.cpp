#include <iostream>
#include <iterator>

int main(){
	char myString[]{"sring"};
	const int length{static_cast<int>(std::size(myString))};
	std::cout<< myString << "tiene" << length << "caracteres.\n";
	
	for(int index{0}; index < length; ++index)
	std::cout<<static_cast<int>(myString[index]) << ' ';
	
	std::cout<< '\n';
	
	return 0;
	}
