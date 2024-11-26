#include <iostream>
#include <Algorithm>
#include <vector>

using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>m>>n;
    vector<vector<int> >matrix(m,vector<int>(n,1));
    cout<<"Enter the array elements"<<endl;
    for(int i=0; i<m; i++)
    for(int j=0; j<n; j++)
    cin>>matrix[i][j];

    for(int i=0; i<m; i++)
    for(int j=0; j<n; j++)
    cout<<matrix[i][j]<<" ";

}