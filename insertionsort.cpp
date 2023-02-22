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
	for(int j=1;j<=n;j++)
    {
	    int curr=arr[j];
	  
	    for(int k=j-1;k>=0;k--)
	    {
	    	if(arr[k]>curr)
	    	{
	    		arr[k+1]=arr[k];
			}
		}
		arr[j+1]=curr;
    }
    	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
