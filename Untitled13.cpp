#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	int sum=0;
	int rev=0;
	cin>>n;
	

    int rem;
    int s=0;
	for(;n>0;n=n/10)
	{
	    s=s+1;
		rem=n%10;
	  //  rev=rev*10+rem;
	   //	cout<<rem<<endl;
	   	sum=sum+(rem*rem*rem);
	
	}
	
	   //cout<<rev;
	   cout<<sum;
	return 0;
}
