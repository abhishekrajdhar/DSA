#include<iostream>
using namespace std;
int main()
{
    int i, j, n, a[100], temp;
    cout<<"enter the order of  array";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            swap(a[i],a[j]);
        }
    }

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";

    }
// sabse chhote wale ko dudho aur usko uski position par la do by swapping;


}