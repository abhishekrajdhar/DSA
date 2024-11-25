#include<iostream>
using namespace std;
int main()
{
    int a[100], first, last, mid, i, search, n;
    cout<<"enter the number of elements";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element you want to search";
    cin>>search;
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(a[mid]<search)
        {
            first=mid+1;
            mid=(first+last)/2;
        }
        else if(a[mid]==search)
        {
            mid=n;
            break;
        }
        else
        {
            last=mid-1;
            mid=(first+last)/2;
        }
}
cout<<"searched element is at";
cout<<mid;
if(first>last)
{
    cout<<"the element is not found";
}
    

}