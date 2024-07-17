// Syed Meesam Turab Bukhari
// B23F0120CS064
// Assignment # 2

#include <iostream>
#include <vector>

using namespace std;

bool isAlphabet(char c);
bool isSentenceEnd(char c);
bool isPunctuation(char c);

int main() 
{
    string para;            //Initializing paragraph string 
    int wordCount=0,        
        sentenceCount=0,
        alphabetCount=0 , i=0;

    vector <char> puntuations;
    bool repeat;

    // To get the paragraph from user
    cout << "Please! Enter your paragraph: "; 
    getline( cin , para );
    cout << para << endl;

    // To check the whole paragraph
    while( para[i] != '\0' )
    {
        // To check if the punctuation is already in the vector
        repeat = false;

        // To check if the character is alphabet
        if ( isAlphabet(para[i]) )              
            alphabetCount++;
        // To check if the character is space
        else if( para[i] == ' ' )               
            wordCount++;
        // To check if the character is sentence end
        else if( isSentenceEnd(para[i]) )
        {
            sentenceCount++;
            wordCount++;
        }

        // To check if the punctuation is already in the vector
        for( int j=0 ; j<puntuations.size() ; ++j )
            if( puntuations[i] == para[i] )     repeat=true;


        // To check if the character is punctuation
        if( isPunctuation(para[i]) && repeat == false )
            puntuations.push_back( para[i] );
        
        //Iteration for next letter
        i++;
    }
    wordCount++;

    cout << "Number of sentences are: " << sentenceCount << endl;
    cout << "Number of words are: " << wordCount << endl;
    cout << "Number of characters are: " << alphabetCount << endl;
    cout << "List of punctuation is: " << endl;

    //Displaying whole pucntuation array (vector)
    for( int j=0 ; j<puntuations.size() ; ++j )
        cout << puntuations[j] << ' ';

    cout << endl;

    return 0;
}

bool isAlphabet(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isPunctuation(char c)
{
    return c == '.' || c == '!' || c == '?' || c == ',' || c == '\'' || c == ';';
}

bool isSentenceEnd(char c)
{
    return c == '.' || c == '!' || c == '?';
}