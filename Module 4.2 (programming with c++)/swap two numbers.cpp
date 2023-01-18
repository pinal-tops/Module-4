//SWAP TWO NUMBERS without using third variable


#include<iostream>
using namespace std;
int main()
{
	int a,b;
	
	cout<<"Enter Numbers 1 : ";
	cin>>a;

	cout<<" Enter Numbers 2 : ";
	cin>>b;
	
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"\n Numbers 1 : "<<a<<endl;
	cout<<"\n Numbers 2 : "<<b<<endl;
	
	return 0;
}

