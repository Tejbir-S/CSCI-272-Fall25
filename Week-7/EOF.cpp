#include <iostream>
#include <sstream>
using namespace std;

int main(){
	string data("Input Test 123 4.7 A");
	
	istringstream iss(data);
	
	string exString1; //Input
	string exString2; //Test
	int exInt; //123
	double exDouble; //4.7
	char exChar; //A
	
	iss>>exString1>>exString2>>exInt>>exDouble>>exChar;
	
	cout<<"The following items were extracted from istringstream object: "
		<<"\nString: "<<exString1
		<<"\nString: "<<exString2
		<<"\n   int: "<<exInt
		<<"\ndouble: "<<exDouble
		<<"\n  Char: "<<exChar<<endl;
	long value; 
	iss>>value;
	
	if(iss.good()){
		cout<<"Value is: "<<value<<endl;
	}
	else{
		cout<<"\nISS exploded. It's empty. EOF."<<endl;
	}
	
	return 0;
}