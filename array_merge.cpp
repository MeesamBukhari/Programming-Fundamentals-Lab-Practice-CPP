#include <iostream>
using namespace std;
int main()
{
    const int size = 5;
    int array1[size];
    int array2[size];
    int mergedArray[2 * size];

    // Input for the first array
    cout<<"Enter "<<size<<" integers for the first array:\n";
    for (int i=0; i<size; i++)
    {
        cout<<"Enter integer "<<(i + 1)<<": ";
        cin>>array1[i];
    }

    // Input for the second array
    cout<<"Enter "<<size<<" integers for the second array:\n";
    for (int i=0; i<size; i++)
    {
        cout<<"Enter integer "<<(i + 1)<<": ";
        cin>>array2[i];
    }

    // Merging both arrays
    for(int i=0; i<size; i++)
    {
        mergedArray[i] = array1[i];
        mergedArray[size + i] = array2[i];
    }

    // Displaying merged array
    cout<<"Merged Array:\n";
    for (int i = 0; i < 2 * size; i++) {
        cout << mergedArray[i] << " ";
    }
    return 0;
}
