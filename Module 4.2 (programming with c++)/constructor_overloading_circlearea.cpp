// wap to find area of circle in constructor over loading

#include<iostream>
using namespace std;
class area
{
	public:
		float ans,r;
		area()
		{
			ans=0;
		}
		area(float r)
		{
			ans=3.14*r*r;
			cout<<"\nValue of Radius : "<<r;
	
			cout<<"\nArea of Circle : "<<ans<<endl;
		}
};

main()
{
	area a;
	area a1(10) ;
	
}
