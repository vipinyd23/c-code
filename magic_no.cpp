#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n;
	int temp=0;
	int temp1=0;
	for(int i=n;i>0;i=i/10)
	{
		x=i%10;
		cout<<x<<endl;
		temp=temp+x;
	}
	cout<<temp<<endl;
	for(int v=temp;v>0;v=v/10)
	{
		y=v%10;
		cout<<y<<endl;
		temp1=temp1+y;
	}
	cout<<temp1<<endl;
	if(temp1==1)
	{
		cout<<"magic no";
	}
	else
	{
		cout<<"not a magic";
	}
	return 0;
}
