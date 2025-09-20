#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> menu; //start with empty set
    
    //the 5 dishes
    menu.push_back("Cookie"); //item 1, index 0
    menu.push_back("Cake"); //item 2, index 1
    menu.push_back("Souls of the damned"); //item 3, index 2
    menu.push_back("Salad"); //item 4, index 3
    menu.push_back("Chip"); //item 5, index 4; yes just a singular chip
    
    //the new item added between cookie and cake; +1 needed to be ahead of the item after the beginning
    menu.insert(menu.begin() + 1, "Chicken Nugget"); 
    
    menu.erase(menu.begin() + 3); 
    //erases the 4th dish which now becomes the souls of the damned because of the nuggets being added
    
    //dish will be the variable to hold each item from the vector menu
    cout<<"Final Menu"<<endl;  
    for(string dish : menu){ //for(type variable_name : vector/array)
        cout<<dish<<endl;
    }
    
    return 0;
}

    /*an array would not work for this question because the amount of values change inside