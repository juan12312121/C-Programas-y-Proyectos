#include<fstream>
#include<iostream>

int main(){
	std::ofstream outf{"sample.dat"};
	
	if(!outf){
		
		std::cerr<<"oh, uh, sample.dat np puede ser abierto en modo escritura" << std::endl;
		return 1;
	}
	
	outf<<"esta es la lina 1" << '\n';
	outf<<"esta es la lina 2" << '\n';
	
	return 0;

}