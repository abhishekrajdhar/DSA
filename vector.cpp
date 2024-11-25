#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //create vector declare
   /*vector<int>v;
    vector<int>v1(5,1);
    
    cout<<"size of vector"<<v.size()<<endl;
    cout<<"capacity of vector"<<v.capacity()<<endl;
    //enter the element
    v.push_back(3);
    v.push_back(5);
    v.push_back(8);
    cout<<"size of v:"<<v.size()<<endl;
    cout<<"capacity of v:"<<v.capacity()<<endl;
    //update value
    v[1]=7;
    cout<<"size of v:"<<v1.size()<<endl;
    cout<<"capacity of v:"<<v1.capacity()<<endl;
    v1.push_back(8);
     cout<<"size of v:"<<v1.size()<<endl;
    cout<<"capacity of v:"<<v1.capacity()<<endl;
    //deletion
    vector<int>vnew;
    vnew.push_back(4);
    vnew.push_back(40);
    vnew.push_back(43);
    vnew.push_back(47);
    vnew.push_back(89);
    vnew.pop_back();
    cout<<"size of vnew:"<<vnew.size()<<endl;
    cout<<"capacity of vnew"<<vnew.capacity()<<endl;
    for(int i=0; i<=vnew.size(); i++)
    {
        cout<<vnew[i]<<" ";
    }
    vnew.insert(vnew.begin()+1,50);
    cout<<endl;
    for(int i=0; i<=vnew.size(); i++)
    {
        cout<<vnew[i]<<" ";
    }
    
    */
    vector<int>arr;
    arr.push_back(24);
    arr.push_back(54);
    arr.push_back(34);
    arr.push_back(78);
    cout<<arr[0]<<endl;
    cout<<arr.front()<<endl;
    
    cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;
    for(auto it=arr.begin(); it!=arr.end(); it++)
    {
        cout<<*it<<" ";
    }
    
   for(auto i: arr)
   {
    cout<<i<<" ";
   }






    


}