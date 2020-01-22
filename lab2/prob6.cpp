#include<iostream>
using namespace std;

class complex{
public:
	int real,img;
	complex(int a,int b);
	void operator++();
	void operator--();
};
 complex::complex(int a, int b){
 	real=a;
 	img=b;
 }

 void complex::operator++(){
 	real++;
 	img++;
 	cout<<real<<" "<<img;
 }

 void complex::operator--(){
 	real--;
 	img--;
 	cout<<"\n"<<real<<" "<<img;
 }




int main(){
	int c, b;
	cin>>c>>b;
  complex a(c,b);
  ++a;
  --a;

}








