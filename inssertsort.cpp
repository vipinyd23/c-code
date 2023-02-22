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

	for(int i=1;i<n;i++)
	{
	   	int temp=a[i];
	   	int j=i-1;
		   	  while(j>=0 && a[j]>temp)
		   	  {
			    a[j+1]=a[j];
			    j--;
			  }
			   a[j+1]=temp;
		   	
	}
		for(int l=0;l<n;l++)
	{
		cout<<a[l];
	}
	
	return 0;	
}
