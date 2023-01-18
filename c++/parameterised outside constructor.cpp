// parameterised outside constructor

#include<iostream>
#include<string.h>
using namespace std;
class student
{
	public :
	int rn;
	string mo,email;
	char name[20];
	
	
		
		student(int, string, string, char[]);
		void display();
		
};

student::student(int rn1, string mo1, string email1, char name1[])
       {
			rn=rn1;
			mo=mo1;
			email=email1;
			strcpy(name,name1);

		}
		
	

	void student::display()
{
	cout<<rn<<endl<<name<<endl<<mo<<endl<<email<<endl;
}
main()
{
	student s(1,"9664752265","pcladani@gmail.com","Pinal Ladani");
	
	s.display();
	
}

