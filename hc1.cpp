#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=1;i<=t;i++)
	{
	    int temp=0;
	    int a,b;
	    cin>>a>>b;
	
	    for(a;a<=b;a++)
	    {
	     
	     if(a%10==2 || a%10==3 ||a%10==9)
	        {
	            temp=temp+1;
	        }
	        
	    }
	    cout<<temp<<endl;
	}
	return 0;
}

