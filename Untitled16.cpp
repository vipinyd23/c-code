#include <iostream>
using namespace std;
class sum
{
	private:
		int a,b;
		public:
			void input(){
				cout<<"enter a and b"<<endl;
				cin>>a>>b;
			}
		friend void add(obj.a,obj.b);
			
};
void add(int x, int y)
{
	int c=x+y;
	cout<<c;
}
int main()
{
	sum obj;
	obj.input();
	add(obj.a,obj.b);
	return 0;
}
