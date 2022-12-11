#include<iostream>
#include<iterator>

int main(){
	
	constexpr int scores[]{84,92,76,81,56};
	constexpr int numStudents{static_cast<int>(std::size(scores)) };
	
	int maxScore{0};
	for(int student{ 0 }; student < numStudent; ++ student){
		if(scores[students] > maxScore){
			
			maxScore = scores[students];
		}
	}
	
	std::cout<<"el mejor promedio es:" << maxScore << '\n';
	
	return 0;
}