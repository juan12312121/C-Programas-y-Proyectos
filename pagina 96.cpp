#include <iostream>
#include <string view>
#include <string>
#includeM <cstring>

int main(){
	std::string_view sv{"pelota";};
	
	sv.remove_suffix(3);
	
	std::string str{sv};
	
	auto azNullTerminated{str.c_str()};
	
	std::cout << str << "tiene" << std::strlen(azNullTerminated) << "letra(s)\n";
	
	return 0;
} 