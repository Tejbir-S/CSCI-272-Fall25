//Binary operator overloading
#include <iostream>
using namespace std;

//.h file
class Integer{
	private:
		int value; //actual integer value we will wrap
	public:
		//constructor
		Integer(int val = 0){
			value = val;
		}
		//getter to read stored value
		int getValue() const{
			return value;
		}
		//overload the binary + operator to add two integer objects
		//Ex: Integer c = a + b
		Integer operator+(const Integer& other) const{
			return Integer(this->value + other.value);
		}
};

//main.cpp
int main(){
	Integer num1(19); //first object
	Integer num2(20); //second object
	
	//call num1.operator + (num2) 
	Integer sum = num1 + num2; //third object  that stores result
	cout<<"Num1: "<<num1.getValue()<<endl;
	cout<<"Num2: "<<num2.getValue()<<endl;
	cout<<"Sum of (num1 + num2): "<<sum.getValue()<<endl;
	
	return 0;
}