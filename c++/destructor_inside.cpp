// inside destructor

#include<iostream>
using namespace std;
class ABC
{
	public:
		ABC()
		{
			cout<<"CONSTRUCTOR IS INVOKE \n";
		}
		~ABC()
		{
			cout<<"DESTRUCTOR IS INVOKED";
		}
};
main()
{
	ABC a;
}
