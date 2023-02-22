// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   
   int n;
    int rev;
   int sum=0;
   cin>>n;
   for(;n>0;n=n/10)
   {
      
       int rem=n%10;
       
       rev=rev*10+rem;
   }
   cout<<rev;
    if(n!=rev)
    {
        cout<<"not palindrome";
    }
    else
    {
        cout<<" palindrome";
    }
    return 0;
}
