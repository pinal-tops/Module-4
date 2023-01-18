#include<iostream>
using namespace std;
int main()
{
	int x=1,y=2,z;
	z= x++ + y++ + x + y + ++x + ++y;
	cout<<x<<y<<z<<endl;
	
	return 0;
}
