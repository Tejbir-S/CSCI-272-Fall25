//everything will be combined in one code
#include <iostream>
using namespace std;

//.h file
class MyNumber{
	private:
		int value; ///internal stored int
	public:
		//constructor
		MyNumber(int val = 0){
			value = val;
		}
		
		//getter to read the stored value
		int getValue() const{
			return value;
		}
		
		//overload the Minus: -num
		//this will not change the original object
		MyNumber operator-() const{
			return MyNumber(-value);
		}
		
		//overload the prefix ++: ++num
		//this will change the current object into (incremebts value)
		MyNumber operator++() {
			++value; //increases the stored value by 1
			return MyNumber(value); 
		}
};

//main.cpp
int main(){
	MyNumber num(10); //object creation and name of object is num
	cout<<"Original value is "<<num.getValue()<<endl;
	
	//using the overloaded unary minus operator
	MyNumber negative = -num; //call the MyNumber::operator()
	cout<<"After applying -num: "<<negative.getValue()<<endl;
	
	//use overloaded prefix ++ operator
	MyNumber incremented = ++num;
	cout<<"After applying ++num, num is: "<<num.getValue()<<endl;
	cout<<"Value returned by the ++num: "<<incremented.getValue()<<endl;
	return 0;
}