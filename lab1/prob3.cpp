#include<iostream>
#include <cmath>
using namespace std;
class area
{
public:
	float r,a,b,x,y,z,ac,ar,at;
};
int main()
{
	int i;
	float p;
	cout<<"Enter your choice"<<endl;
	cout<<"1 for a circle"<<endl<<"2 for a ractangle"<<endl<<"3 for a triangle"<<endl;
	cin>>i;
	switch(i)
	{
		case 1:
		{
			cout<<"enter the circle radious:"<<endl;
			area circle;
			cin>>circle.r;
			circle.ac=3.142*circle.r*circle.r;
			cout<<"Area of the circle is:"<<circle.ac<<endl;
		}break;
		case 2:
		{
			cout<<"enter the two side of the ractangle:"<<endl;
			area ract;
			cin>>ract.a>>ract.b;
			ract.ar=ract.a*ract.b;
			cout<<"Area of the ractangle is:"<<ract.ar<<endl;
		}break;
		case 3:
		{
			cout<<"enter the 3 sides of a triangle:"<<endl;
			area tri;
			cin>>tri.x>>tri.y>>tri.z;
			p=(tri.x+tri.y+tri.z)/2;
	        tri.at=sqrt(p*(p-tri.x)*(p-tri.y)*(p-tri.z));
			cout<<"Area of the triangle is:"<<tri.at<<endl;
		}break;
		default:cout<<"enter a correct choice"<<endl;break;
	}
}