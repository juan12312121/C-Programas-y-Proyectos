#include <algorithm>
#include <iostream>
#include <iterator>

int main(){

	
	int array[]{30,50,20,10,40};
	constexpr int legth{static_cast<int>(std::size(array))};
	
	for(int startIndex{0}; startInderx < length - 1; ++startIndex){	
		for(int currentIndex{startIndex + 1}; currentIndex < length; ++currentIndex){
		
			if(array[currentIndex] < array[smallestIndex])
			smallestIndex = currentIndex;
	}

}
	std::swap(array[startIndex], array[smallestIndex]);
	
	for(int index{0}; index < length; ++index)
	std::cout<< array[index] << ' ';



	return 0;
}