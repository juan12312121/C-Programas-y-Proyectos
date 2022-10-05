#include<cstdint> 
#include<iostream>

int main(){
	
	std::cout<<"fast 8"<< sizeof(std::int_fast8_t) * <<"bist /n";
	std::cout<<"fast 16"<< sizeof(std::int_fast16_t) * <<"bist /n";
	std::cout<<"fast 32"<< sizeof(std::int_fast32_t) * <<"bist /n";
	
	std::cout<<"least 8"<< sizeof(std::int_least8_t) * <<"bist /n";
	std::cout<<"least 16"<< sizeof(std::int_least16_t) * <<"bist /n";
	std::cout<<"least 32"<< sizeof(std::int_least32_t) * <<"bist /n";
	
	
	
	
	return 0;
	
}
