#include<iostream>
using namespace std;
int main()
{
	float bp,da,hra,gp;
	cout <<"enter the basic pay of employee"<<endl;
	cin >>bp;
	da=bp*(.4);
	hra=bp*(.2);
	gp=bp+hra+da;
	cout <<"Gross pay of employee is:"<<gp<<endl;
}