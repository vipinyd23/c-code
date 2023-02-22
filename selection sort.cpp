#include<iostream>
using namespace std;
int mini(int A[],int size,int j)
{
	int min,minindex;
	min=A[j];
	minindex=j;
	for(j=j+1;j<size;j++)
	   if(min>A[j])
	   {
	   	min=A[j];
	   	minindex=j;
	   }
	   return minindex;;
}
int main()
{
	int A[]={33,22,51,66,55,88,98,96,1,4};
	int temp,minindex,k;
	 for(k=0;k<=8;k++)
	 {
	 	minindex=mini(A,10,k);
	 	temp=A[k];
	 	A[k]=A[minindex];
	 	A[minindex]=temp;
	 }
	 for(int h=0;h<=9;h++)
	 {
	 	cout<<A[h]<<" ";
	 }
}
