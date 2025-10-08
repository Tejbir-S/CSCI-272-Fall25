//Streams

/*#include <iostream>
using namespace std;

int main(){
	int number;
	
	cout<<"Enter a number: "<<endl;
	cin>>number;
	cout<<"You entered: "<<number<<endl;
	
	cerr<<"This is an error message\n";
	clog<<"This is a log message\n";
	
	return 0;
}*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	string item = "Coffee";
	double price = 2.5;
	double tax = 0.201;
	double total = price + tax;
	
	/*cout<<setw(10)<<left<<"Item"<<
		setw(10)<<right<<"Price"<<endl;
	cout<<setw(10)<<left<<item<<
		setw(10)<<right<<fixed<<setprecision(2)<<total<<endl;*/
	
	/*cout<<setw(10)<<left<<"Item"<<
		setw(10)<<right<<"Price"<<endl;
	cout<<setw(10)<<left<<item<<
		setw(10)<<right<<fixed<<setprecision(5)<<total<<endl;
	cout<<setw(10)<<setfill('-')<<"Menu"<<endl<<
		setw(10)<<left<<item<<setw(10)<<right<<total<<endl;*/
	
	//cin.get() gets a single character from the input
	//getline(cin, name) gets the entire cin statement including spaces and assigns it to name
	//cin.ignore(numeric_limits<streamsize>::max(), '\n') will compact everything into one line until max is reached 
}