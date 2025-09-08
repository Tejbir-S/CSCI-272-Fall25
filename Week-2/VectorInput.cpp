#include <iostream>
#include <vector>
using namespace std;

int main(){
    int choice;
    vector<int> numbers; 
    for(int i = 0; i < 5; i++){
        int num;
        cout<<"Enter a number: ";
        cin>>num;
        numbers.push_back(num); //add user values to vecto
    }
    cout<<"You entered: ";
    for(int i = 0; i < numbers.size(); i++){
        cout<<numbers[i]<<" ";
    }
    cout<<endl;
    
    cout<<"What number do you want to search: ";
    cin>>choice; 
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] == choice){
            cout<<"Found at position "<<i + 1<<endl;
            return 0;
        }
    }
    cout<<"Not found";
    return 0;
}