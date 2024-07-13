#include<iostream>
using namespace std;
int main(){
	// Variable Declaration
    string name;
    int birth_year, current_year, age;

    // Taking name as input from the user
    cout<<"Enter your name: ";
    getline(cin,name);

    // Taking birth year as input from the user
    cout<<"Enter your birth year: ";
    cin>>birth_year;

    // Taking current year as input from the user
    cout<<"Enter the current year: ";
    cin>>current_year;

    // Calculating the age
    age = current_year - birth_year;
    
    // Displaying the name and age of the user
    cout<<"Your name is "<<name<<endl;
    cout<<"You are "<<age<<" years old.";
}