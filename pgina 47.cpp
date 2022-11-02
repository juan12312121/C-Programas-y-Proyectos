#include <iostream>

int main(){
	
	bool inBigClassroom {false};
	const int classSize {inBigClassroom ? 30 : 20};
	std::cout<< "el numero de alumnos de la clase es:"<< classSize;
	
	return 0; 
}