#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int c;
	int k;
	int a=0,b=0;
    int lead=0,leader=0;
	cin>>c;
	for(int i=1;i<=c;i++)
	{
	    int a1,b1;
	    cin>>a1>>b1;
	    a+=a1;
	    b+=b1;
	    k=abs(a-b);
	    if (lead<k){
	        lead = k;
	        if (a>b)
	            leader = 1;
	       else 
	            leader = 2;
	    }
	}
	cout<<leader<<" "<<lead<<endl;
}

