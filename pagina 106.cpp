#include <iostream>

int g_mode;

void doSomething(){
	
	g_mode = 2;
	
}

int main(){
	
	g_mode = 1;
	
	
	doSomething();
	
	if(g_mode == 1)
		std::cout << "no se detecto ninguna amenaza";
	else
	std::cout<< "lanzamiento de misiles nucleares :(..... 3-2-1 \ n";
	
	return 0;
}