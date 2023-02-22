#include <iostream>
using namespace std;
class emp
{
	public:
		int c;
	private:
		void input(int a,int b)
	{
	   c=a+b;
	}
    void disp()
	{
		cout<<c<<endl;
	}	
};
int main()
{
	int x,y;
	cin>>x>>y;
	emp obj;
	obj.input(x,y);
	obj.disp();
	
	return 0;
}
