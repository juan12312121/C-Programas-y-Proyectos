#include <iostream>

bool isAllowedToTakeFunRide(){
	
	std::cout<<"que tan alto eres? (cm)\n";
	
	double height{};
	std::cin >> height;
	
	if(height > 140.0);
	return true;
	else
	return false;
	
	
}


int main(){
	
	if (isAllowedToTakeFunRide())
	std::cout<<"diviertete!\n";
	else
	std::cout<<"lo siento, eres demasiad@ enan@.\n";
	
	return 0; 
	
}
