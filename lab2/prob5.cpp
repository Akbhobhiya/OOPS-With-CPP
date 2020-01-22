#include<iostream> 
using namespace std;
class point
{
private:
	int h,m,s;
	point()
	{
		h=0;
		m=0;
		s=0;
	}
public:
	point(int a,int b,int c)
	{
		h=a;
		m=b;
		s=c;
	}
	int geth()
	{
		return h;
	}
	int getm()
	{
		return m;
	}
	int gets()
	{
		return s;
	}
};
int main()
{	
	int a,b,c;
	cout<<"enter the hours:";
	cin>>a;
	cout<<"enter the minutes:";
	cin>>b;
	cout<<"enter the seconds:";
	cin>>c;
	point p1(a,b,c);
	cout<<"time is: ";
	cout<<p1.geth()<<"::"<<p1.getm()<<"::"<<p1.gets()<<endl;
	return 0;
}
