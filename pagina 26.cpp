#include<iostream>

void passValue(int value){
	value = 99;
}

void passArray(int prime[5]){
	
	prime[0] = 11;
	prime[1] = 11;
	prime[2] = 11;
	prime[3] = 11;
	prime[4] = 11;

}

int main(){
	
	int value{1};
	std::cout<<"antes de passValue"<<Value <<'\n';
	passValue(value);
	std::cout<<"despues del passValue:"<<value << '\n';
	
	int prime[5]{2,3,5,7,11};
	std::cout<<"antes de passArray: "<< prime[0] << "" << prime[1] << "" << prime[2] << " " << prime[3] << " " << prime[4] << '\n';
	passArray(prime);
	std::cout<<"despues de passArray: "<< prime[0] << "" << prime[1] << "" << prime[2] << " " << prime[3] << " " << prime[4] << '\n';

}