#include <iostream>
#include <vector>
using namespace std;

double getAverage(const vector<int> &student_IDs){ //pass by reference
    int sum = 0;
    for(int i = 0; i < student_IDs.size(); i++){ //will add IDs together
        sum += student_IDs[i];
    } 
    double average = static_cast<double>(sum) / student_IDs.size(); //could be sum / size
    return average; //static cast makes sure it comes out as a decimal instead of integer
}

int getHighest(const vector<int> &student_IDs){
    int highest = student_IDs[0]; //set first ID as highest to replace that shit later
    for(int i = 1; i < student_IDs.size(); i++){ //starts at 1 because 0 is used 
        if(student_IDs[i] > highest){ 
            highest = student_IDs[i]; //will replace the ID if a bigger one is found
        }
    }
    return highest;
}

int main(){
    vector<int> student_IDs = {3099, 2142, 1198, 1067, 1041, 2069, 4141, 2344, 1987, 2099};
    
    double average = getAverage(student_IDs); //function calling
    int highest = getHighest(student_IDs);
    
    cout<<"Average student ID: "<<average<<endl;
    cout<<"Highest student ID: "<<highest<<endl;
    
    return 0;
}