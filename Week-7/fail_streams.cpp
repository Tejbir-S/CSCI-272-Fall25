//fail() and clear()
#include <iostream>
#include <sstream>
using namespace std;

int main(){
	string data = "7 ate 9"; //int string int
	istringstream iss(data); //creating input string stream object named iss
	
	int value; //7 and 9
	while(iss>>value){
		cout<<"Read int: "<<value<<endl;
	}
	
	//when a bad token stops the extraction
	if(iss.fail()){
		cout<<"Stream failed. Skipping bad token..."<<endl;
		iss.clear(); //clearing the fail state
		string bad;
		iss>>bad;
		cout<<bad<<endl;
	}
	
	//resume reading the next values
	while(iss>>value){
		cout<<"Read int cont: "<<value<<endl;
	}
	return 0;
}