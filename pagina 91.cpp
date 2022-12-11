#include<iostream>
#include <string view>
#include <iterator>

int main(){
	
	char vowels[]{'a','e','i','o','u'};
	
	std::string_views str{vowels, std::size(vowels)};
	
	return 0;
}