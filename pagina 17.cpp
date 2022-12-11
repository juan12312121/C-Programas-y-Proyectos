int main(){
	
	char strBuf;
	while(std::cin.get(strBuf, 100));
	std::cout << strBuf << '\n';
	std::cout << std::cin.gcount() << "caracteres fueron leidos" << std::endl;
	
	
	return 0;
}
