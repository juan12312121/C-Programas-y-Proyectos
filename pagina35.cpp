#include <iostram>

int main(){
	
	int x{5};
	int y = x++;
	
	
	std::cout<< x << '' << y;
	return 0;
}