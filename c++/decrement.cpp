// pre decrement example

#include<iostream>
using namespace std;
int main()
{
	int y=3,z;
	z=(--y)+(y=10); // y=2 + y=10 but bz it depend upon second value assign in first bracet b'of --y pre decrement of y
	cout<<z<<endl; //  z=20 bz (2)+(10) =10+10=20 bz of predecrement
	return 0;
}
