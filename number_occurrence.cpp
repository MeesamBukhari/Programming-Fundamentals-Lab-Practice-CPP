#include<iostream>
using namespace std;
int main()
{
    const int size = 8;
    int numbers[size], num, occurance=0;
    cout<<"Enter 8 integers"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<"Enter integer # "<<i+1<<": ";
        cin>>numbers[i];
    }
    cout<<"Enter a number to find it's occurance: ";
    cin>>num;
    for(int i=0; i<size; i++)
    {
        if(num==numbers[i])
        {
            occurance++;
        }
    }
    cout<<"Occurance of "<<num<<" is "<<occurance;
    return 0;
}