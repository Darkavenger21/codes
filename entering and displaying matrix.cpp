#include<iostream>
using namespace std;
int main()
{
    int row_size,col_size;
    cout<<"Enter the row Size Of the Matrix: \n";
    cin>>row_size;
    cout<<"Enter the columns Size Of the Matrix: \n";
    cin>>col_size;

    int matrix[row_size][col_size];
    int i,j;
    cout<<"Enter the Matrix Element: \n";
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"Given Matrix is: \n";
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}