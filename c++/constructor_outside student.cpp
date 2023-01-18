#include<iostream>
using namespace std;
class student
{
	int rn;
	string mo;
	char name[20];
	
	public:
		student();
		void display();
		
};

student::student()
{
	cout<<"enter roll no : ";
	cin>>rn;
	fflush(stdin);
	
	cout<<"enter name: ";
	gets(name);
	
	cout<<"enter mobile no : ";
	cin>>mo;
}

void student::display()
{
	cout<<rn<<endl<<name<<endl<<mo<<endl;
}

main()
{
	student s;
	s.display();
}
