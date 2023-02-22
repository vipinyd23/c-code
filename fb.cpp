#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int f=0,s=1,t;
	cout<<f<<s;
	for(int i=1;i<=n-2;i++)
	{
		t=f+s;
		cout<<t;
	  //  s=f;
	    //t=s;
	    f=s;
	    s=t;

		
	}
	return 0;
}
