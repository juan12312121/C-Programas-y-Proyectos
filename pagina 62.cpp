#include<cmath>
#include<iostream>

bool approximatelyequel(double a, double b, double epsilon)
{
	
	return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b) * epsilon)); )
}