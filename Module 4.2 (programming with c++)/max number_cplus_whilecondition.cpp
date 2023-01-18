// wap to find max no in cplus

#include<iostream>
using namespace std;
main()
{
	int n,max=0,a,b;
	
	cout<<"Enter No : ";
	cin>>n;
	
	a=n;
	
	while(a>0)
	{
		n=a%10; 
		a=a/10;
	
		if(max<n)
		{
			max=n;
		}
	}

		
	cout<<"Max Number : "<<max;
	
}
