#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        int f=1;
        int n;
        cin>>n;
        if(n==0)
        {
            cout<<"1";
        }
        else if(n>0)
        {
        for(int j=1;j<=n;++j)
        {
           f=f*j;   
        }
        cout<<f<<endl;
        }
        
    }
    return 0;
}
