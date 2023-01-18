#include<iostream>
using namespace std;
class base
{
	public:
		void display()
		{
			cout<<"hello i m base class ";
		}
};
class derived : public base
{
	public:
		void display()
		{
			base::display();
			cout<<"\nhello i m derived class ";
		}
};
main()
{
	derived d;
	d.display();
}
