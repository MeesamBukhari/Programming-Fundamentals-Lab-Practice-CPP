#include <iostream>
using namespace std;
int main() {
	
    const int maxInpLength=100;
    char inp[maxInpLength];
    // Taking input from user
    cout<<"Enter a word: ";
    cin.getline(inp, maxInpLength);
    // Check if the input is a palindrome
    int length = 0;
    while(inp[length] != '\0'){
        length++;
    }
    bool isPalindrome = true;
    for(int i=0; i<length / 2; ++i){
        char a=tolower(inp[i]);
        char b=tolower(inp[length - 1 - i]);
        if(a != b){
            isPalindrome=false;
            break;
        }
    }
    // Displaying the output
    if(isPalindrome){
        cout<<"\""<<inp<<"\" is a palindrome."<<endl;
    } else{
        cout<<"\""<<inp<<"\" is not a palindrome."<<endl;
    }
    return 0;
}



