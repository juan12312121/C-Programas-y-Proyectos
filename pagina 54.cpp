#include<iostream>

int main(){
	
double d1{100.0 - 99.99};
double d2{10.0 - 9.99};

if(d1 == d2)
std::cout<<"d1 == d2" <<'\n';
else if(d1 > d2)
std::cout<<"d1 > d2" <<'\n';
else if(d1 < d2)
std::cout<<"d1 < d2" <<'\n';


	return 0;
}