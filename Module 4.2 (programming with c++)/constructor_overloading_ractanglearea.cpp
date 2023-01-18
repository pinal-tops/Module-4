// wap to find area of ractangle in constructor over loading

#include<iostream>
using namespace std;
class area
{
	public:
		float ans, height,base;
		area()
		{
			ans=0;
		}
		area(float height, float base)
		{
			ans=base*height;
			cout<<"\nvalue of height : "<<height;
			cout<<"\nvalue of base : "<<base;
			cout<<"\narea of ractangle : "<<ans;
		}
};

main()
{
	area a;
	area a1(10,5) ;
	
}
