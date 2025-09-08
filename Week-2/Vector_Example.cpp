#include <iostream>
#include <vector> //library for vectors
using namespace std;

int main(){
	//vector intialization
	vector<double> prices = {1, 2, 3, 4, 5};
	
	//add values to the end of the 'Prices' vector
	prices.push_back(10);
	prices.push_back(50);
	prices.push_back(11);
	
	//accessing and modifying 
	double total = prices[0] + prices[1] + prices[2];
	
	cout<<"Total = $"<<total<<endl;
	/*vector does not have direct function to add to the front; this is a dynamic array and adding to the end is more efficient
	to add to the front, you will use insert function and then find the beginning of the vector and then add the value*/
	
	prices.insert(prices.begin(), 20);
	cout<<"First item: "<<prices.front()<<endl;
	cout<<"Last item: "<<prices.back()<<endl;
	cout<<"Total size of my vector (prices): "<<prices.size()<<endl;
	
	double total2 = prices[0] + prices[1] + prices[2];
	cout<<"Total = $"<<total2<<endl;
		
	return 0;
}
