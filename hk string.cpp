#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    string str;
    int count=0; 
    cin>>str;  
    for(int j=0;j<str.length();j++)
    {
         if(str[j]==str[j+1])
        {
            count++;
        }
    }
    cout<<count<<endl;
    
    }
    return 0;
}

