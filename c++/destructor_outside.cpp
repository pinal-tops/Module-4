//outside destructor

#include<iostream>
using namespace std;
class student
{
	char name[20],add[20];
	int rno,pincode;
	
	public:
	student();
	~student();
	void read();
	void display();	
};

student::student()
{
	cout<<"\nSTUDENT DETAILS -- "<<endl;
}

void student::read()
{
	cout<<"ENTER NAME : ";
	cin>>name;
	
	cout<<"ENTER ROLL NO : ";
	cin>>rno;
	
	cout<<"ENTER ADDRESS : ";
	cin>>add;
	
	cout<<"ENTER PINCODE : ";
	cin>>pincode;
}

void student::display()
{
	cout<<"\nSTUDENT NAME ----"<<name<<endl;
	cout<<"STUDENT ROLL NO : "<<rno<<endl;
	cout<<"STUDENT ADDRESS : "<<add<<endl;
	cout<<"STUDENT PINCODE : "<<pincode<<endl;
}

student::~student()
{
	cout<<"CONSTRUCTOR IS DESTROYED AND DESTRUCTOR IS INVOKED ";
}

main()
{
	{
		student s;
		s.read();
		s.display();
	}
	
	student s1;
	s1.read();
	s1.display();
}
