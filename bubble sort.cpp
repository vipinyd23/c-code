#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int x=0;x<n;x++)
	{
		cin>>arr[x];
	}
	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;	
					
			}
		
		}
	cout<<arr[i]<<" ";
	}
	return 0;
}

