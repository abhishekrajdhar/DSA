#include <iostream>
using namespace std;

int main()
{
   /* string s;
    cin>>s;
    int start=0;
    int end=s.size()-1;
    while(start<end)
    {
        swap(s[start],s[end]);
        start++, end--;
    }
    cout<<s;

// for size calculation
    
    int size=0;
    while(s[size]!='/0')
    {
        size++;
    }
    cout<<size;*/
    string s1="naman";
    int start=0, end=s1.size()-1;
    while(s1[start]<s1[end])
    {
        if(s1[start]!=s1[end])
        {
        cout<<"Not a Palindrome number";
        return 0;
        }
        start++, end--;
    }
    cout<<"a palindrome number";
}