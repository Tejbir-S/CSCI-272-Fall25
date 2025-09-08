#include <iostream>
using namespace std;

template <typename T>
T maxNum(T a, T b){
	return (a > b) ? a : b;
}

int main(){
	//Example 1: Using max() with integers
	int num1 = 5, num2 = 10;
	cout<<"Max of "<<num1<<" and "<<num2<<" is: "<<max(num1, num2)<<endl;
	//Example 2: Using max() with doubles
	double num3 = 3.14, num4 = 2.71;
	cout<<"Max of "<<num3<<" and "<<num4<<" is: "<<max(num3, num4)<<endl;
	return 0;
}