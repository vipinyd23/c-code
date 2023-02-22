#include <iostream>
using namespace std;
class addition
{
	int a;
	int b;
	friend int add(addition s);
	public:
	void set(int x, int y)
	{
	     a=x;
	     b=y;
	}
};
int add(addition s)
{
	int c=s.a+s.b;
	cout<<c;
	return 0;	
}
int main()
{
	addition s;
    s.set (6,9);
	add(s);
	return 0;
}

