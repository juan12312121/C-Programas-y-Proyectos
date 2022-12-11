#include<iostream>
#include <string view>

int main(){
	
	char arr[]{"gold"};
	std::string_view str{arr};
	
	std::cout<< str << '\n';
	
	arr[3] = 'f';
	
	std::cout << str << '\n';
	
	return 0;
}
