#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main(){
	ostringstream oss; //output string stream object is oss
	
	string name = "Alice";
	int score = 95;
	double gpa = 3.876;
	
	//build a message using oss
	oss<<"Student: "<<name
		<<" | Score: "<<score
		<<" | GPA: "<<fixed<<setprecision(2)<<gpa;
		
	//convert the stream into a string
	string message = oss.str(); //.str() is the strema
	
	ostringstream oss1; //created a new object
	oss1<<"Test Data"<<endl; //new stream
	
	cout<<message<<endl; 
	cout<<oss1.str()<<endl; //print the string of oss1
	return 0;
}