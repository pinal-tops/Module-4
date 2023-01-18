// constructor program for student

#include<iostream>
using namespace std;
class student
{
	int id;
	string name;
	
	public:
		student()
		{
			cout<<"enter student name : ";
			cin>>name;
			cout<<"enter student id : ";
			cin>>id;
			
			
		}
		void display()
		{
			cout<<endl<<name<<endl<<id<<endl;
		}
};

main()
{
	student s;
	s.display();
}
