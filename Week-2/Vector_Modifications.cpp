#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> numbers = {10, 20, 30, 40, 50};
	cout<<"First element: "<<numbers.front()<<endl; //output is 10
	cout<<"Last element: "<<numbers.back()<<endl; //output is 50
	cout<<"Second element: "<<numbers[1]<<endl; //output is 20
	cout<<"Third element: "<<numbers.at(2)<<endl; //output is 30
	
	///vector modification
	numbers[1] = 35;
	numbers.at(2) = 35;
	numbers.front() = 5;
	numbers.back() = 5;
	numbers.push_back(272);
	
	cout<<"\n\n======After Modifcations======\n\n";
	cout<<"First element: "<<numbers.front()<<endl; //output is 5
	cout<<"Last element: "<<numbers.back()<<endl; //output is 272
	cout<<"Second element: "<<numbers[1]<<endl; //output is 20
	cout<<"Third element: "<<numbers.at(2)<<endl; //output is 30
	
	return 0;
}