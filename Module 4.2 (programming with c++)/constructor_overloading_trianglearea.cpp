// wap to find area of triangle in constructor over loading (Triangle: ½ *Area* breadth )

#include<iostream>
using namespace std;
class area
{
	public:
		float ans, height,breadth;
		area()
		{
			ans=0;
		}
		area(float height, float breadth)
		{
			ans=(breadth*height)/2;
			cout<<"\nValue of Height   : "<<height;
			cout<<"\nValue of Breadth  : "<<breadth;
			cout<<"\nArea  of Triangle : "<<ans;
		}
};

main()
{
	area a;
	area a1(20,2) ;
	
}
