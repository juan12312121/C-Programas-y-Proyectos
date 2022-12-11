#include<iostream>
#include<string>

int main(){
	char text[]{"hola"};
	std::string str{ text };
	std::string more{ str };
	
	std::cout<< text ' ' << str << ' ' << more << '\n';
	
	return 0;
}