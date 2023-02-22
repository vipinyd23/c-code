#include <bits/stdc++.h>
using namespace std;
int main()
{
   int i,j,k;
   cin>>i>>j>>k;
   int count=0;
   for(int a=i;a<=j;a++)
   {
   int rem;
   int rev=0;
   int x=a;
   cout<<x<<endl;
   while(a>0)
    {
     rem=a%10;
     rev=rev*10+rem;
     a=a/10;
    
    }
    cout<<rev<<endl;
    if(abs(x-rev)%k==0 || (x-rev)==0)
     {
         count++;
     }
  
   }  
   cout<<count<<endl;
   return 0;
}
