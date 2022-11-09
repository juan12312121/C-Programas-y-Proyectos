#include <cmath>
#include <algorithm>

bool appoximatelyequal(double a, double b, double epsilon)
{
	
	return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b))* epsilon));
}

bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
	double diff{std::abs(a - b)};
	if(diff <= absEpsilon)
	return true;
	
	return (diff <= (std::max(std::abs(a), std::(b)) * relEpsilon));
}

int main(){
	
	std::cout << appoximatelyequal(a, 1.0, 1e-0) << '\n';
	std::cout << appoximatelyequal(a-1.0, 0.0, 1e-8) << 'n';
	std::cout << approximatelyEqualAbsRel(a-1.0, 0.0, 1e-12, 1e-8) << '\n';
}