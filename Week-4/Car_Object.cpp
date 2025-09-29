//Classes

#include <iostream>
using namespace std;

class Car{
	private:
		string brand{"Honda"};
		string model = "Civic";
		int year {2025};
	
	public:
		void startEngine(){
			cout<<"Engine started for: "<<year<<" "<<brand<<" "<<model<<endl;
		}
		
		void accelerate(){
			cout<<"Accelerate car "<<model<<endl;
		}
};

int main(){
	Car car1; //create object
	
	car1.startEngine();
	car1.accelerate();
	
	return 0;
}