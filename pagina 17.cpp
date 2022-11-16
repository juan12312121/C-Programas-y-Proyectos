#include <iostream>

void print(){
	
	std::cout << "there\n";
}

 namespace foo{
 	
 void print(){
 	
 	std::cout << "hello";
 }	
 }
 
 int main(){
 	
 	foo::print(); 
	 ::print();
	 
	 return 0;
	 }
	 