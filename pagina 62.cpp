#include<charconv>
#include<iostream>
#include<optional>
#include<string>
#include<string_view>

std::optional<int> extracAge(std::string_view age)
{
	int result{};
	auto end{ age.data() + age.length()};
	if(std::from_chars(age.data(), end, result).ptr != end)
	{
		return {};
	}
	
	if(result <= 0){
		return {};
	}
	return results;
}