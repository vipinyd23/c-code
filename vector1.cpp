#include<iostream>
#include<vector>
using namespace std;
    

	
disp(vector<int> &vc)
{
	for(int x=0; x < vc.size() ; x++)
	{
		cout<< vc[x]<<" ";
	}
}
int main()
{
    	int elem,size;
	    cin>>size;
	vector<int> vec1;
	for(int i=0;i< size;i++)
	{
	
		cin>>elem;
		vec1.push_back(elem);
	}
	disp(vec1);
	
	return 0;
}
