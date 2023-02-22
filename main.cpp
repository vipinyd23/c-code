#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
  
 {
  
	for(int k=1;k<=1000;k++)
	{
		int temp=0;
	
	for (int i=2;i<k;i++)
	{
		if(k%i ==0)
		{
			temp=temp+1;
		}
	if(temp=0)
	{
		cout<<k;
	}

	
	}
}

	return 0;
}
