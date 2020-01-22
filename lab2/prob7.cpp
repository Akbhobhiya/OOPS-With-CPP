#include<iostream>
using namespace std;
class student
{
public:
	int age,sem;
	string  name,regno,gender,branch;
	void setdata(int a,int s,string n,string r, string g, string b)
	{
		age=a;
		sem=s;
		name=n;
		regno=r;
		branch=b;
		gender=g;
	}
	void show()
	{
		cout<<endl<<"The complete details of the student::"<<endl;
		cout<<"Name = "<<name<<endl;
		cout<<"Regester Number = "<<regno<<endl;
		cout<<"Age = "<<age<<endl;
		cout<<"Gender = "<<gender<<endl;
		cout<<"Semester = "<<sem<<endl;
		cout<<"Branch = "<<branch<<endl;	
	}
};
// student’s total marks, percentage and
// grade
class StudentResultInfo: public student
{
public:
	int total_marks,percentage,grade;
	void setdata1(int tm,int p, int g)
	{
		total_marks=tm;
		percentage=p;
		grade=g;
	}
	void print()
	{
		show();
		cout<<endl<<"Result information of student:"<<endl;
		cout<<"Total Marks = "<<total_marks<<endl;
		cout<<"percentage = "<<percentage<<endl;
		cout<<"grade = "<<grade<<endl;
	}
};
class totalinfo: public StudentResultInfo
{
public:
	void printall()
	{
		cout<<endl<<"All info:::::"<<endl;
		print();
	}
};
int main()
{
	int a,s,m,p,gr;
	string n,r,g,b;
	cout<<"enter the basic details of the student:"<<endl;
	cout<<"enter the name"<<endl;
	cin>>n;
	cout<<"enter the regno"<<endl;
	cin>>r;
	cout<<"enter the age"<<endl;
	cin>>a;
	cout<<"enter the gender"<<endl;
	cin>>g;
	cout<<"enter the Semester"<<endl;
	cin>>s;
	cout<<"enter the Branch"<<endl;
	cin>>b;
	cout<<"enter the total_marks"<<endl;
	cin>>m;
	cout<<"enter the percentage"<<endl;
	cin>>p;
	cout<<"enter the grade"<<endl;
	cin>>gr;
	totalinfo s1;
	s1.setdata(a,s,n,r,g,b);
	s1.setdata1(m,p,gr);
	s1.printall();
}