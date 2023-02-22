#include<iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	
	int temp=0;
	for(int x=2;x<a;x++)
	{
	if(a%x==0)
	  {
	  	temp=temp+1;
	  	
	  }
    }
    if(temp!=0 )
	{
		cout<<"not a prime no";
	}
	else
	{
		cout<<" prime"; 
	}
}

