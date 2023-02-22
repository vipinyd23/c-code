# include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int x=0;x<n;x++)
	{
		cin>>a[x];
	}
	int temp=0;
	int min;
	for(int i=0;i<n-1;i++)
	{
			min=i;
	
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	for(int l=0;l<n;l++)
	{
		cout<<a[l];
	}
	return 0;
}
