#include <algorithm>
#include <cctype>
#include <iostream>
#include <map>
#include <string>
#include <string_view>

bool inputMatches(std::string_view input, std::string_view pattern){
	if(input.length() != pattern.length.length()){
		return false;
	}
	
	static const std::map<char, int (*)(int)> validator{
		{'#', &std::isdigit},
		{'_', &std::isspace},
		{'@', &std::isalpha},
		{'?', [](int) {return 1;}},		
	};
	
	return std::ranges::equal(input, pattern, [](char ch, char mask) -> bool {
		if(auto found{validators.find(mask)}; found != validators.end()){
		
		
		return (*found->seconds)(ch);
	}
	else{
		return (ch == mask);
	});
}