// Syed Meesam Turab Bukhari
// B23F0120CS064
// Assignment 1

#include<iostream>
using namespace std;
int main(){
	// Variable Declaration
	int num, d1, d2, d3, d4, d5;
	
	// Asking the user to enter a 5-digit number
	cout<<"Enter a five digit number (XXXXX): ";
	cin>>num;
	
	// Validating the user to enter only 5-digit number as input
	if(num >= 10000 && num <= 99999){
		d1 = num/10000;
		num %= 10000;
		d2 = num/1000;
		num %= 1000;
		d3 = num/100;
		num %= 100;
		d4 = num/10;
		num %= 10;
		d5 = num;
		
		// Displaying each digit with a tabular space
		cout<<d1<<"\t"<<d2<<"\t"<<d3<<"\t"<<d4<<"\t"<<d5;
	}
	else{
		cout<<"\nENTER A VALID FIVE DIGIT NUMBER...";
	}
	return 0;
}                                                  