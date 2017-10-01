#include <iostream>
#include <fstream>

using namespace std;

class complex {
private:
    float x; // real part
    float y; // imaginary part

public:
    complex(float re = 0.0, float im = 0.0);
    float real(void) const; // return real part
    float imag(void) const; // return imag part
    void real(float re);    // set real part
    void imag(float im);    // set imag part
};

////////////////////// prototypes of complex operators //////////////////////
complex operator+(const complex& a, const complex& b);
complex operator-(const complex& a, const complex& b);
complex operator*(const complex& a, const complex& b);
complex operator/(const complex& a, const complex& b);
istream& operator >>(istream& in, complex& a);
ostream& operator <<(ostream& out,const complex& a);



int main(void)
{
    complex a, b, c;
    
    cout << "Enter two complex numbers in the form (re, im): ";
    cin >> a >> b;

    c = a + b;
    cout << "The sum of " << a << " and " << b << " is " << c << endl;

    c = a - b;
    cout << "The difference of " << a << " and " << b << " is " << c << endl;
    
    c = a * b;
    cout << "The product of " << a << " and " << b << " is " << c << endl;

    c = a / b;
    cout << "The division of " << a << " and " << b << " is " << c << endl;
    
    return 0;
}

///////////////////////// implementation of complex ////////////////////
complex::complex(float re, float im)
{
	x=re;
	
	y=im;
}
float complex::real(void) const
{
	return x;
}
float complex::imag(void) const
{
	return y;
}
void complex::real(float re) 
{
	x=re;
} 
void complex::imag(float im)
{
	y=im;
}
istream& operator>>(istream& in, complex& a)
{
	char discard;
	
	float h,v;
	
	in>>discard>>h>>discard>>v>>discard;
	
	a.real(h);
	
	a.imag(v);
	
	return in;
}

ostream& operator<<(ostream& out, const complex&a)
{
	out<<"("<<a.real()<<","<<a.imag()<<")";
	
	return out;
}
//////////////////////// implementation of complex operators /////////////
complex operator+(const complex& a, const complex& b)
{
	float h,v;
	
	h=a.real()+b.real();
	
	v=a.imag()+b.imag();
	
	complex c(h,v);
	
	return c;
}
complex operator-(const complex& a, const complex& b)
{
	float h,v;
	
	h=a.real()-b.real();
	
	v=a.imag()-b.imag();
	
	complex c(h,v);
	
	return c;
}
complex operator*(const complex& a, const complex& b)
{
  float h,v;
     if((b.imag()*a.imag())<0)
     {
    h=a.real()*b.real()+a.imag()*b.imag();
	v=a.real()*b.imag()+a.imag()*b.real();
     }
     else
     {
   	 h=a.real()*b.real()-a.imag()*b.imag();                                                                                
	 v=a.real()*b.imag()+a.imag()*b.real();
     }
     complex c(h,v);
     return c;
}
complex operator/(const complex& a, const complex& b)
{
	float h,v,w,z,u;
	if((b.imag()*a.imag())<0)
	{
	
	w=a.real()*b.real()-a.imag()*b.imag();
	u=a.real()*(-b.imag())-a.imag()*b.real();
	z=b.real()*b.real()+b.imag()*b.imag();
	h=w/z;
	v=u/z;
}
	else
	{
	w=a.real()*b.real()+a.imag()*b.imag();
	u=a.real()*(-b.imag())+a.imag()*b.real();
	z=b.real()*b.real()+b.imag()*b.imag();
	h=w/z;
	v=u/z;
	}
	
	complex c(h,v);
	
	return c;
}

