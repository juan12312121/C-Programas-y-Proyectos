#include<iostream>
#include<iterator>

int main(){
	
	constexpr int scores[]{84,92,76,81,56};
	constexpr int numStudents{static_cast<int>(std::size(scores)) };
	
	int maxScore{0};
	for(int student{ 0 }; student < numStudent; ++ student){
		if(scores[students] > maxScore){
			
			maxcore = scores[students];
		}
	}
	
	std::cout<<"la mejor calificacion fue:" << maxScore << '\n';
	
	return 0;
}
