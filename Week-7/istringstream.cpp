#include <iostream>
#include <sstream>
using namespace std;

int main(){
	string whatever = "100 3.5";
	istringstream iss(whatever); //stream containing 100 and 3.5
	
	int quantity; //ineteger 0
	double price; //double 0.0
	
	iss>>quantity>>price;
	
	cout<<"Total cost: "<<(quantity * price)<<endl;
	cout<<quantity<<endl;
	cout<<price<<endl;
	return 0;
}