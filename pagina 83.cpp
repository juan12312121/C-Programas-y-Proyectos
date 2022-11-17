#include <iostream>

int initx ();
int inidad ();

int g_x {initx ()};
int g_y {inity ()};

int initx (){
	
	return g_y;
}

int inity (){
	
	return 5;
}

int main(){
	
	std::cout << g_x << '' << g_y << '\n';
}