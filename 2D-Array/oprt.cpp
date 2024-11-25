#include <iostream>
using namespace std;

void add(int arr1[][3], int arr2[][3], int arr[][3], int row, int col)
{
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            arr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void disp(int arr[][3], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}

void printsumdiag(int arr[][3], int row, int col)
{
    int first=0, sec=0;
    int i=0;
    while(i<row)
    {
        first += arr[i][i];
        i++;
    }
    i=0; 
    int j=col-1;
    while(j>=0)
    {
        sec += arr[i][j];
        i++, j--;
    }
    cout<<"first diag: "<<first<<endl;
    cout<<"second diag: "<<sec<<endl;
}

void rev(int arr[][3], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        
            int start=0, end=col-1;
            while(start<end)
            {
                swap(arr[i][start],arr[i][end]);
                start++, end--;
            }
        
    }

}

int main()
{
    int arr1[3][3] = {1,2,3,4,5,6,7,8,9};
    int arr2[3][3] = {0,1,2,3,4,5,6,7,8};
    cout<<"Sum of array"<<endl;
    int arr[3][3];
    add(arr1,arr2,arr,3,3);
    disp(arr,3,3);
    cout<<"sum of diagonal elements:"<<endl;
    printsumdiag(arr,3,3);
    cout<<"Reversing each row of matrix"<<endl;
    rev(arr,3,3);
    disp(arr,3,3);


}