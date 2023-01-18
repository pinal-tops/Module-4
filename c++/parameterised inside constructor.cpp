// parameterised constructor

#include<iostream>
using namespace std;
class point
{
	int x,y;
	
	public:
		point(int x1, int y1)
		{
			x=x1;
			y=y1;
		}
		int getx()
		{
			return x;
		}
		int gety()
		{
			return y;
		}
};

main()
{
	point p(10,20);
	cout<<"X = "<<p.getx();
	cout<<endl<<"Y ="<<p.gety();
}
