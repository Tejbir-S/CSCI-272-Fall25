#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool isValidPhoneNumber(const string& input); //function definition

int main(){
	string input;  
	do{
		cout<<"Enter a US Phone Number (e.g., (800)222-4455): ";
		getline(cin, input);
		
		//call a validation function 
		if(!isValidPhoneNumber(input)){
			cout<<"Invalid phone number, try again\n";
		}
	}
	
	while(!isValidPhoneNumber(input));
		cout<<"Valiud input\n";
	
	return 0;
}

bool isValidPhoneNumber(const string& input){ //function declaration
	istringstream iss(input);
	
	char openParen, closeParen, dash;
	int areaCode, firstPart, secondPart;                                                      
	
	if(iss >> openParen >> areaCode >> closeParen >> firstPart >> dash >> secondPart){
		if(openParen == '(' && closeParen == '(' && dash == '-' && areaCode >= 100 && firstPart <= 999 && secondPart >= 1000){
			return true;
		}
	}                          
	return false;
}