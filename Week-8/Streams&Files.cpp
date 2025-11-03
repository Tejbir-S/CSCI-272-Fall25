#include <iostream>
#include <fstream> //file processing
#include <cstdlib> //for exit()
using namespace std;

int main(){
	//creates an ofstream object named outClientFile, file name = client.text
	ofstream outClientFile("client.txt");
	
	//check i ffile exists, if not, show a warning
	if(!outClientFile){
		cerr<<"File could not be opened.\n";
		exit(EXIT_FAILURE);
	}
	
	//user input
	cout<<"Enter account number, name, and balance. [Space Separated]\n"
		<<"Sample: 1001 Avijit 100.20\n"
		<<"Enter EOF (Ctrl+2 in Windows/ Ctrl+D in Mac/Linux) to end.\n";
		
	//setup the variable and take the input
	int account;
	string name;
	double balance;
	
	//input
	while(true){
		if(cin>>account>>name>>balance){
			outClientFile<<account<<' '<<name<<' '<<balance<<endl;
		}
		else if(cin.eof()){
			//end of file input marker
			cout<<"\n End of file reached. Data Saved.\n";
			break;
		}
		else{
			//input error (missing or invalid errors)
			cerr<<"Invalid input format, please re-enter (e.g., 100 Alex 50.28): \n";
			cin.clear(); //clear the failbit
			cin.ignore(1000, '\n'); //discards bad input
		}
	}
	outClientFile.close(); //close the file and save it
}