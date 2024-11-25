#include<iostream>
using namespace std;
int main()
{
    int a[100], i, start, end, n;
    cout<<"enter the number of elements";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    start=0;
    end=n-1;

    while(start<end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }

    for(i=0; i<n; i++)
    {
        cout<<a[i];
    }


return 0;

}