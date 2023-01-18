/*
Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multilevel Inheritance)

*/

#include<iostream>
using namespace std;

class student
{
	public :

	int rno;
	string name;
	
 
	
	void data()
	{
		cout<<"Enter Name : ";
		cin>>name;
	
		cout<<"Enter Roll No. :";
		cin>>rno;
	}
};

class test : public student
{
	public :
			
	float maths,sci;

	void mark()
	{
		cout<<"\nEnter Maths Marks : ";
		cin>>maths;
	
		cout<<"Enter Science Marks :";
		cin>>sci;
	}
	
};

class result : public test
{
	public :
	void display()
	{
		cout<<"\n\t Result ";
		cout<<"\n\n\nName : "<<name;
		cout<<"\n\nRoll No. : "<<rno;
		cout<<"\n\nTotal Marks Is : "<<maths+sci<<endl;
	}
};

main()
{
	result r;
	r.data();
	r.mark();
	r.display();
}

