#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> numbers;
	numbers.reserve(2); //capacity is 2
	
	cout<<"First element = "<<numbers.front()<<endl; //these two couts will print random large numbers
	cout<<"Last element = "<<numbers.back()<<endl;
	cout<<"Reserved: "<<endl<<"Size = "<<numbers.size()<<" Capacity "<<numbers.capacity()<<endl<<endl; //the vector has no size but has been reserved at 2
	
	numbers.push_back(10);
	cout<<"After adding 10: "<<endl<<"Size = "<<numbers.size()<<" Capacity = "<<numbers.capacity()<<endl;
	
	cout<<"First element = "<<numbers.front()<<endl;
	cout<<"Last element = "<<numbers.back()<<endl<<endl;
	
	numbers.push_back(20);
	cout<<"After adding 20: "<<endl<<"Size = "<<numbers.size()<<" Capacity = "<<numbers.capacity()<<endl;
	
	cout<<"First element = "<<numbers.front()<<endl;
	cout<<"Last element = "<<numbers.back()<<endl<<endl;
	
	numbers.push_back(40);
	cout<<"After adding 40: "<<endl<<"Size = "<<numbers.size()<<" Capacity = "<<numbers.capacity()<<endl; //capacity size becomes 4 because the reserve started at 2, so it increases by that number
	//the reserve in this case will start at 2 and increment to 4, 6, 8, 10,...
	
	cout<<"First element = "<<numbers.front()<<endl;
	cout<<"Last element = "<<numbers.back()<<endl;
	
	return 0;
}