#include <iostream>
using namespace std;

int main() {
    int row1,col1,row2,col2;
      cout<<"Enter the dimensions of the first matrix: ";// dimensions of the first matrix.
      cin>>row1>>col1;
      cout<<"Enter the dimensions of the second matrix: "; // dimensions of the second matrix.
      cin>>row2>>col2;

    // Check if matrices can be multiplied
    if (col1 != row2) 
	{
        cout<<"\nError!!! The number of columns in the first matrix \nmust be equal to the number of rows in the second matrix.\n";
        return 1; //  using return 1 to exit with an error code.
    }

     cout<<"=>Enter the elements of the first matrix:";// Input elements of the first matrix
    int matrix1[row1][col1];
    for (int i=0; i<row1; i++) 
	{ //using for loop for rows.
        for (int j=0; j<col1; j++) 
		{ // using for loop for cols.
            cout<<"\nEnter element at position (" <<i+1<<", "<<j+1<< "): ";
            cin>>matrix1[i][j];
        }
    }

 
    cout<<"=>Enter the elements of the second matrix: ";   //  elements of the second matrix
    int matrix2[row2][col2];
    for (int i=0; i<row2; i++) 
	{
        for (int j=0; j<col2; j++) 
		{
            cout<<"\nEnter element at position (" <<i+1<<", "<<j+1<< "): ";
            cin>>matrix2[i][j];
        }
    }

    // Performing matrix multiplication.
    int result[row1][col2];
    for (int i=0; i<row1; i++) 
	{
        for (int j=0; j<col2; j++) 
		{
            result[i][j] = 0;
            for (int k=0; k<col1; k++) 
			{
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout<<"=============================";
    cout<<"\nMatrix multiplication result:\n";
    for (int i=0; i<row1; i++) 
	{
        for (int j=0; j<col2; j++) 
		{
            cout<<result[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
