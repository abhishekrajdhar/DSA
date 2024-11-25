#include <iostream>
#include <climits>
using namespace std;

//print colwise
void printcol(int arr[][4], int row, int col)
{
    for(int j=0; j<col; j++)
    {
        for(int i=0; i<row;  i++)
        {
            cout<<arr[i][j]<<endl;
        }
    }
}

//print rowwise
void printrow(int arr[][4], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<endl;
        }
    }
}

//searching an element in an element
void search(int arr[][4], int row, int col, int key)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(arr[i][j]==key)
            {
                cout<<"Yes"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}

int maxrow(int arr[][4],int row, int col)
{
    int sum = INT_MIN;
    int index = -1;
    for(int i=0; i<row; i++)
    {
        int total=0;
        for(int j=0; j<col; j++)
        {
            total += arr[i][j];
        }
        if(sum<total)
        {
            sum = total;
            index = i;
        }
    }
    return index;
}

int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"Clowise print";
    printcol(arr,3,4);
    cout<<"Row Wise"<<endl;
    printrow(arr,3,4);
    cout<<"Searching element 7"<<endl;
    search(arr,3,4,7);
    cout<<"Row with maximum index "<<maxrow(arr,3,4);


}