// Write a C++ program that takes user input to determine the size of an array. The program should then take user input to fill the array with integers. The program should then take user input to determine the number to find the occurance of. The program should then display the number of times the number occurs in the array.
// Your program should include functions to handle the following tasks:
// 1. Take user input to determine the size of an array.
// 2. Take user input to fill the array with integers.
// 3. Take user input to determine the number to find the occurance of.
// 4. Display the number of times the number occurs in the array.
// Ensure that your program checks for valid input, such as a positive array size and valid integers.


#include<iostream>
using namespace std;

void findOccurances()
{
    int SIZE;
    cout<<"Enter size of the array you want to insert integers in: ";
    cin>>SIZE;
    if(SIZE<=0)
    {
        cout<<"Invalid size";
        return;
    }

    int numbers[SIZE];
    cout<<"Enter "<<SIZE<<" integers into the array:\n";
    for(int i=0; i<SIZE; i++)
    {
        cout<<"Enter integer #"<<i+1<<": ";
        cin>>numbers[i];
    }

    int num;
    cout<<"Enter a number to find its occurrence in the provided array: ";
    cin>>num;

    int occurrence=0;
    for(int i=0; i<SIZE; i++)
    {
        if(num == numbers[i])
        {
            occurrence++;
        }
    }

    cout<<"Occurrence of "<<num<<" is "<<occurrence<<endl;
}

int main()
{
    findOccurances();
    return 0;
}
