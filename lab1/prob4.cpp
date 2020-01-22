#include<iostream>
#include <string> 
using namespace std;
class student
{
public:
	string name;
	int reg;
	string branch;
	int sem;
	void print()
	{
		cout<<"student name is:"<<name<<endl;
		cout<<"student regester number is:"<<reg<<endl;
		cout<<"student branch is:"<<branch<<endl;
		cout<<"student is in "<<sem<<"th semester"<<endl;
	}
};
int main()
{
	student s;
	cout<<"enter the student details:"<<endl;
	cout<<"enter the name:";
	getline(cin, s.name);
	cout<<"enter the reg no.:";
	cin>>s.reg;
	cout<<"enter branch name:";
	getline(cin, s.branch);
	cout<<endl<<"enter semester:";
	cin>>s.sem;
	cout<<endl<<"student details are:"<<endl;
	s.print();
}