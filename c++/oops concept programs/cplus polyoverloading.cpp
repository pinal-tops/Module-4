//polymorphism .........1) overloading function

#include<iostream>
using namespace std;
class student
{
	public:
		void display(int a)
		{
			cout<<"value of A : "<<a;
		}
			void display(int a,float b)
		{
			cout<<"value of A : "<<a;
			cout<<"value of B : "<<b;
		}	
};
main()
{
	student s;
	s.display(10);
	s.display(5,22.5);
}
