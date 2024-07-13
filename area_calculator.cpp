#include<iostream>
#include<cmath>
#define PI 3.14
using namespace std;
int main(){
	//Variable Declaration
	char choice;
	float sides,height,radius,area,base;
	cout<<"T: Trinagle";
	cout<<"\nS: Square";
	cout<<"\nC: Circle";
	cout<<"\nEnter your choice according to number mention: ";
	cin>>choice;
	//Switch Case
	switch(choice){
		//For Triangle
		case 'T':
		case 't'
			{
				cout<<"Enter the base value: \n";
				cin>>base;
				cout<<"Enter the height: \n";
				cin>>height;
				if(base<=0||height<=0){
					cout<<"Enter the correct value.";
				}
				else{
					area=(height*base)/2;
					cout<<"Area of triangle = "<<area;
				}
				break;
			}
		//For Square
		case 'S':
		case 's':
			{
				cout<<" Enter the sides value of square: \n";
				cin>>sides;
				if(sides<=0){
					cout<<"Enter value greater than zero: ";
				}
				else{
					area=sides*sides;
					cout<<"Area of square = "<<area;	
				}
				break;
			}
		//For Circle
		case 'C':
		case 'c':
		    {
	            cout<<"Enter the radius of circle: \n";
				cin>>radius;
				if(radius<=0){
					cout<<"Enter the value greater than zero.";
				}
				else{
					area=PI*pow(radius,2);
					cout<<"The area of circle = "<<area;	
				}
				break;
			}
		//If no case matched
		default:
			cout<<"Invalid choice made.";
			break;
	}
	return 0;
}



