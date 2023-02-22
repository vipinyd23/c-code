#include <iostream>
using namespace std;
class abc
{
	int a1;
	int b1;
	int a2;
	int b2;
	friend int add(abc obj);
	public:
		void set1(int x1,int y1)
		{
		    a1=x1;
			b1=y1;	
		}
			void set2(int x2,int y2)
		{
		    a2=x2;
			b2=y2;	
		}
     int complex1()
	 {
	 	cout<<a1<<" + "<<"i "<<b1<<endl;
	 	return 0;
	  }	
     int complex2()
	 {
	 	cout<<a2<<" + "<<"i "<<b2<<endl;
	 	return 0;
	  }		
};
int add(abc obj)
{
    int c=obj.a1+obj.a2;
	int d=obj.b1+obj.b2;
	cout<<c<<" + "<<"i "<<d;	
}
int main()
{
	abc obj;
	obj.set1(3,4);
	obj.complex1();
	obj.set2(6,7);
	obj.complex2();
	add(obj);
	
}
