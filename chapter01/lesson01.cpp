#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool divide(vector<int>arr)
{
    int prefix=0, total_sum=0, n=arr.size();
    for(int i=0; i<n; i++)
    {
        total_sum+=arr[i];
    }

    for(int j=0; j<n; j++)
    {
        prefix+=arr[j];
        if(total_sum-prefix==prefix)
        {
            return 1;
        }
    }
}

int main()
{
int n;
cout<<"enter the number of element";
cin>>n;
vector<int>v(n);
cout<<"enter the elemnts";
for(int i=0; i<n; i++)
{
    cin>>v[i];
}
cout<<divide(v);

return 0;
}