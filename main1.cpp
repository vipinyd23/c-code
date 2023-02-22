#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int temp=0;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int x;
	    cin>>x;
	    int arr[x];
	    for(int j=0;j<=x;j++)
	    {
	        cin>>arr[j];
	    
	        if(arr[j]>=1000)
	        {
	            temp=temp+1;
	        }
	   
	    }
	     cout<<temp<<endl;
	}
	return 0;
}

