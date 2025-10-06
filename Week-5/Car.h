//Destructors

#include <iostream>
#include <string>
using namespace std;

class Car{
	private:
		string brand = "Toyota";
		string model = "Camry";
		int year = 2022;
		
	public:
		Car(){
			//nothing here, the defaults have already been created
		}
		~Car(){ //destructor
			cout<<"Destroy "<<brand<<" "<<model<<" "<<year<<endl;
		}
		Car(string b, string m, int y){ //parameterized 
			brand = b; 
			model = m;
			year = y;
		}
		
		Car(const  Car &other){ //copy constructor
			brand = other.brand;
			model = other.model;
			year = other.year + 1;
		}
		
		//member functions
		void startEngine(){
			cout<<"Start engine for: "<<brand<<" | Model: "<<model<<" | Year: "<<year<<endl;
		}
		void accelerate(){
			cout<<"Accelerate engine for: "<<brand<<" | Model: "<<model<<" | Year: "<<year<<endl;
		}
};
