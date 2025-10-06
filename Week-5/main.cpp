#include "Car.h"
#include <iostream>
using namespace std;

int main(){
	Car car1; //create a car object
	
	Car car2("Honda", "Civic", 2024); //parameter
	
	Car car3(car2); //copy constructor
	
	Car car4(car3); //copy 2
	
	car1.startEngine(); //call member functions
	car2.startEngine();
	car3.startEngine();
	car4.startEngine();
	
	car2.accelerate();
	car3.accelerate();
	
	//destructor is going to be called automatically
	return 0;
}