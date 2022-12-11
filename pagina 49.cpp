#include<iostream>
#include<iterator>

int main(){
	
	int x{ 2 };
	int y{ 4 };
	std::cout<<"antes de intercambio x =" << x << ", y =" << y << '\n';
	std::swap(x,y);
	std::cout<<"despues de intercambio x =" << x << ", y =" << y << '\n';
}