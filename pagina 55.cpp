int main(){
	
	do{
		std::cout<< "ingrese su numero telefonico (###) ###-###:";
		std::getline(std::cin, phoneNumber);
		
	}while (!inputMatches(phoneNumberm,"(###) ###-###"));
	
	std::cout<<"ingresaste:" << phoneNumber << '\n';
}