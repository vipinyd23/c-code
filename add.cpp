#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	float x=0.1;
	for(int k=1;k<=n;k++)
	{
		int a=1;
		float h=a+x;
		cout<<h<<endl;
		h=a;
	}
	return 0;
}
