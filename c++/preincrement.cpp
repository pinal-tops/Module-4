//pre increment example

#include<iostream>
using namespace std;
int main()
{
	int y=3,z;
	z=(++y)+(y=10); // y=4 + y=10 but 
	cout<<z<<endl; //  z=20 bz (4)+(10) =(10)+(10)=20 bz of pre decrement
	return 0;
}
