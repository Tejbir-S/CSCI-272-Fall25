#include <iostream>
#include <sstream>
using namespace std;

int main(){
	string input;
	int number;
	
	cout<<"Enter an integer between 0 and 100: ";
	cin>>input;
	
	istringstream iss(input); //created a stream from the string "input" named iss
	
	if(iss >> number){ //if iss is an integer, which is a number,
		if(number >= 0 && number <= 100){
			cout<<"Valid Input: "<<number<<endl;
		}
		else{
			cout<<number<<" out of range!\n";
		}
	}
	else{
		cout<<"Invalid Input (not an integer)\n";
	}
	
	return 0;
}