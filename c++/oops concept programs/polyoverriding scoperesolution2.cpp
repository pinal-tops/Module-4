#include<iostream>
using namespace std;
class A
{
	public: 
	void fun()
	{
		cout<<"hello i m class a";
		
	}
};
class B
{
	public:
		void fun()
		{
			cout<<"\nhello i m class b";
		}
};
class c: public A,public B
{
};

main()
{
	c obj;
	obj.A::fun();
	obj.B::fun();
}
