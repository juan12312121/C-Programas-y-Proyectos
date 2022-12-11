#include <iostrema>

int main(){
	
	char ch;
	while(std::cin.get(ch))
	std::cout << ch;
	
	return 0;
}