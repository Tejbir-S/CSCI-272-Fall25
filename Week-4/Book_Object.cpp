#include <iostream>
#include <string>
using namespace std;

class Book{
  private:
    string title = "The Outsiders";
    string author = "S.E. Hinton";
    int year = 1967;
  
  public:
    void displayinfo(){
        cout<<"Title: "<<title<<"    Author: "<<author<<"    Year: "<<year<<endl;
    }
    
    void readBook(){
        cout<<"You are now reading "<<title<<" by "<<author<<endl;
    }
};

int main(){
    Book book1; //create object
    
    book1.displayinfo();
    book1.readBook();
    
    return 0;
}