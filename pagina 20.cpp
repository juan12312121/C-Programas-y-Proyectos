#include<iostream>

enum StudentNames{
	
	kenny,
	kyle,
	stan,
	butters,
	cartman,
	max_students
};

int main(){
	
	int testScore[max_students]{};
	testScore[stan] = 76;
	
	return 0;
}