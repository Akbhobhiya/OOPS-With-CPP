#include<iostream> 
using namespace std; 
class Complex { 
private: 
	int real, imag; 
public: 
	Complex(int r = 0, int i =0) 
	{
		real = r; imag = i;
    } 
	Complex operator ++ ()
	{ 
		Complex res; 
		res.real = ++real;
		res.imag = ++imag; 
		return res; 
	} 

	Complex operator --()
	{
		Complex p;
		p.real=--real;
		p.imag=--imag;
		return p;
	}
	Complex operator ++(int)
	{
		Complex res; 
		res.real = ++real;
		res.imag = ++imag; 
		return res; 
	}
	Complex operator --(int)
	{
		Complex p;
		p.real=--real;
		p.imag=--imag;
		return p;
	}
	void print()
	{
	    cout << real << " + i" << imag << endl;
	} 
}; 

int main() 
{ 
	int x,y;
	cout<<"enter the real part and imagine part of Complex number"<<endl;
	cin>>x>>y;
	Complex c1(x,y); 
	cout<<"pre incriment operator"<<endl;
	Complex c3 = ++c1; // An example call to "operator++" 
	c3.print();
	cout<<"pre decrement operator"<<endl;
	Complex c4=--(c1);
	c4.print();
	cout<<"post incriment operator"<<endl;
	Complex c5=c1++;
	c5.print();
	cout<<"post decrement operator"<<endl;
	Complex c6=c1--;
	c6.print();
} 


