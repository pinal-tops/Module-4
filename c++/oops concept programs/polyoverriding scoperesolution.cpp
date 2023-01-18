#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		void display()
		{
			cout<<"enter a value of a :"<<endl;
			cin>>a;
		}
};
class B: public A
{
	public :
		int b;
		void display()
		{
			A::display();
			cout<<"enter a value of b :"<<endl;
			cin>>b;
		}
		void display(int c)
		{
			cout<<"enter a value of c :"<<endl;
			cin>>c;
			cout<< "addition of a+b+c = "<<a+b+c<<endl;
		}
};
main()
{
	B main;
	main.display();
	main.B::display(0);
}
