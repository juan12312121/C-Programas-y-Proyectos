#include<iostream>
#include <string view>

int main(){
	
	std::string_view text{"hola"};
	std::string_view srt{text};
	std::string_view more{str};
	
	std::cout<< text << ' ' << str << ' ' << more << '\n';
	
	return 0;
}