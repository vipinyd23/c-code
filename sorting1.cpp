#include <iostream>
using namespace std;
int main()
{
	int n;
	int temp;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int k=1;k<n;k++)
	{
	
	for(int j=0;j<n-k;j++)
	{
		if(arr[j]>arr[j+1])
		{
			 temp=arr[j];
			 arr[j]=arr[j+1];
			 arr[j+1]=temp;
		}
    }
	   
	}
		for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
//	cout<<endl;
	return 0;
}
