//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <iostream>
using namespace std;

int main() {
    int x,y;
    std::cin >> x;
    std::cin >> y;
    if(x>y)
    {
        std::cout << y << std::endl;
    }
    else if(x<y && x%5==0)
    {
        std::cout << (y-x)-0.5 << std::endl;
    }
    else
    {
    	cout<<y<<endl;
	}
    
	return 0;
}
