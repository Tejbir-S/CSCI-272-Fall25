#include <iostream>
#include <string>
using namespace std;

class Movie{
    private:
        string title = "Unknown";
        string director = "Anonymous";
        int year = 2000;
    
    public:
        Movie(){ //default constructor
        }
        
        Movie(string t, string d, int y){ //parameterized constructor
            title = t;
            director = d;
            year = y;
        }
        
        void displayinfo(){
            cout<<"Title of movie: "<<title<<"    Director: "<<director<<"    Release Year: "<<year<<endl;
        }
        
        void playmovie(){
            cout<<"Now playing: "<<title<<" ("<<year<<")"<<" directed by "<<director<<endl;
        }
};

int main(){
    Movie movie1; //default values
    Movie movie2("Ne Zha", "Yu Yang and Jiaozi", 2019); //customized
    Movie movie3("Coraline", "Henry Selick", 2009); //customized
    
    movie2.displayinfo();
    movie3.playmovie();
    
    return 0;
}