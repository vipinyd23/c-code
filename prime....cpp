// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
   for(int n=2;n<100;n++)
   {
   int count=0;
   for(int j=2;j<n;++j)
   {
       if(n%j==0)
       {
           count++;
       }
   }
   if(count==0)
   {
       cout<<n<<endl;
   }
   }
   return 0;
}

