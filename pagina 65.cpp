#include <cmath>
#include <algorithm>

bool approximatelyequal(double a, double b, double epsilon)
{

	return (std::abs(a - b) (std::max(std::abs(a), std::abs(b)) * epsilon));
}

int main(){
	
	double a{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};
	
	std::cout << approximatelyequal(a, 1.0, 1e-0) << '\n';
	
	std::cout << approximatelyequal(a-1.0, 0.0, 1e-0) << 'n';
	
	
}