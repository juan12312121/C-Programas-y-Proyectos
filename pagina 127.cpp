#include <iostream>
#include <cstddef>
void print(int x){
	std::cout << "imprime(int):" << x << '\n';

}

void print(int *x){
	
	if(!x)
	std::cout<< "imprime(int*): null\n";
	else
	std::cout<< "imprime(int*):" << *x << '\n';

}

int main(){
	
	int *x {NULL};
	print(x);
	print(0);
	print(NULL);
	
	return 0;
}