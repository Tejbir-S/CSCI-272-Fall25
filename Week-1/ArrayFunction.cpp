#include <iostream>
using namespace std;

//function to calculate average
double average(int scores[], int size){
	int sum = 0;
	for(int i = 0; i < size; i++){
		sum += scores[i];
	}
	return (double)sum/size; //return average
}

int main(){
	int scores[5] = {90, 85, 70, 85, 100}; 
	cout<<"Average = "<<average(scores, 5)<<endl;
	return 0;
}