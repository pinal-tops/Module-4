//Write a program of Addition, Subtraction, Division, Multiplication using constructor.


#include<iostream>
using namespace std;

class sum
{
	float a,b,add,sub,mul,div;
	public :
	sum()
	{

		cout<<"Enter value of A :";
		cin>>a;
	
		cout<<"Enter value of B :";
		cin>>b;
	}
	
	void addition()
	{
		add=a+b;
		cout<<a<<"+"<<b<<"="<<add<<endl;
	}
	
	void subtraction()
	{
		sub=a-b;
		cout<<a<<"-"<<b<<"="<<sub<<endl;
	}
	
	void multiplaction()
	{
		mul=a*b;
		cout<<a<<"*"<<b<<"="<<mul<<endl;
	}
	
	void division()
	{
		div=a+b;
		cout<<a<<"/"<<b<<"="<<div<<endl;
	}
	
};

main()
{
	int n;
	
	menu :
		{
			cout<<" Enter Your Choice \n\n1) Addition \n2) Subtraction \n3) Multiplication \n4) Division \n";
			cin>>n;
		}
	
	sum s;
	switch(n)
	{
			case 1:
		{
			s.addition();
			break ;
		}
		
	case 2:
		{
			s.subtraction();
			break ;
		}
		
	case 3:
		{
			s.multiplaction();
			break ;
		}
		
	case 4:
		{
			s.division();
			break ;
		}
		
	default :
	{
		cout<<"\nEnter Valid Value for calculation";
		goto menu;
	}
	}
	

}
