#include <iostream>
#include <string>
#include <sstream> //string stream
using namespace std;

class Person{
	public:
		string name;
		int age;
		string gender;
};

int main(){
	string inputString = "Alice 30 Female";
	
	istringstream input(inputString); //istringstream is a class that allows you to treat a string as a source of input
	
	Person person1; 
	
	input>>person1.name>>person1.age>>person1.gender;
	cout<<"Name: "<<person1.name<<endl;
	cout<<"Age: "<<person1.age<<endl;
	cout<<"Gender: "<<person1.gender<<endl;
	
	return 0;
}
