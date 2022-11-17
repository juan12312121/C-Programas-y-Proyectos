#include "constants.h"
#include <iostream>

int main(){
	
	std::cout<< "cuantos estudiantes hay en tu clase?";
	int students{};
	std::cin >> students;
	
	
	if(students > constants::max_class_size)
	std::cout<<"hat muchos estudiantes en tu clase";
	else
	std::cout<<"el grupo no es tan grande";
	
	return 0;
}