#include<iostream>
#include<cstring>
#include<iterator>

int main(){
	char buffer[255];
	std::cout<< "ingresaste una cadena:";
	std::cin.getline(buffer, std::size(buffer));

	int spacesFound{0};
	int bufferLength{static_cast<int>(std::strlen(buffer))};
	for(int index {0}; index < bufferLength; ++index){
		
		if(buffer[index] == ' ')
        ++spacesFound;
	}

std::cout<<"ingresaste" << spacesFound << "espacios!\n";

return 0;
}
