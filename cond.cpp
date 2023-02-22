#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
 void add(int a, int b)
  {
  	int sum=a+b;
 	cout<<sum;
  } 
  int main()
  {
  	cout<<"enter the numbers";
  	int a,b;
  	cin>>a>>b;
  	add(a,b);
  	return 0;
  }
