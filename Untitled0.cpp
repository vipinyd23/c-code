#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	//cout<<x<<y;
	
}
int main()
{
	int a=2;
	int b=5;
	swap(&a,&b);
	cout<<a<<endl<<b;
	
	return 0;
}

