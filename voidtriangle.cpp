#include<iostream>
using namespace std;
int main()
{
 int i, j, n;
    cout<<"enter the number";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(j=1; j<=2*i-1; j++)
        {
            if(i==1||i==n)
            {
            cout<<"*";
             }
             else{
                 if(j==2*i-1||j==1)
                 {
                     cout<<"*";
                 }
                 else
                 {
                     cout<<" ";
                 }
             }
        }
        cout<<endl;
    }
    return 0;
}