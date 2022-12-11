#include<iostream>
#include<cstring>
#include<iterator>

int main(){
	
	char name[20]{"geovany"};
	std::cout<< "mi nombre es geovany:" <<name '\n';
	std::cout<< name << "tiene" << std::strlen(name) << "letras.\n";
	std::cout<<name << "tiene" << std::size(name) << "caracters en el arreglo.\n";
	
	return 0;
}