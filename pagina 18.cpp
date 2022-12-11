#include <string>
#include <iostream>

int main(){
	std::string strBuf;
	std::getline(std::cin, strBuf);
	std::cout << strBuf << '\n';
	
	return 0;
}