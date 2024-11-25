#include<iostream>
using namespace std;

int main()
{
    int a[1000], n, i, j;
    cout<<"enter the number of elements";
    cin>>n;
    cout<<"enter the  elements";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    for(j=i; j>0; j--)
    {
        if(a[j]<a[j-1])
        swap(a[j],a[j-1]);
        else
        break;
    }

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

}