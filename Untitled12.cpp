#include <iostream>
using namespace std;
int main()
{
	int a=5;
	int *b= &a;
	cout<<b<<endl;
	cout<<&a<<endl;
	cout<<*b;
	return 0;
}
