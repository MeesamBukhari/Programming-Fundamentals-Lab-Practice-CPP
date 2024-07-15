// Write a function to calculate the factorial of a given number. Allow the user to input a number, and then use the function to compute and display its factorial.

#include<iostream>
using namespace std;

int factorial(int number)
{
    int fact=1;
    for(int i=1; i<=number; i++)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;
    return 0;
}