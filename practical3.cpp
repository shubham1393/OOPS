
#include <iostream>
using namespace std;
class Complex {
private:
int real;
int imag;
public:
 
 Complex(int r = 0, int i = 0) {real = r; imag = i;}
 
 friend ostream & operator << (ostream &out, Complex const &obj);
 friend istream & operator >> (istream &in, Complex &obj);
 
 Complex operator + (Complex const &obj)
 {
 Complex res;
 res.real = real + obj.real;
 res.imag = real + obj.imag;
 return res;
 }

 Complex operator * (Complex const &obj)
 {
 Complex res;
 res.real=((real)*(obj.real))-((imag)*(obj.imag));
 res.imag=((real)*(obj.imag))+((obj.real)*(imag));
 return res;
 }
};
ostream & operator << (ostream &out, Complex const &obj)
{
 out << obj.real;
 out <<" + "<< obj.imag<<" i";
 return out;
}
istream & operator >> (istream &in, Complex &obj)
{
 cout << "\n Enter Real Part: "<<endl;
 in >> obj.real;
 cout << "\n Enter Imag Part: "<<endl;
 in >> obj.imag;
 return in;
}
int main()
{
 Complex c1,c2,c3,c4;
 cout <<"\n Enter First Number : ";
 cin >> c1;
 cout <<"\n Enter Second Number : ";
 cin >> c2;
 
 c3 = c1+c2;
 cout << "\n The Addition Is : " <<c3 ;

 
 c4 = c1 * c2;
 cout << "\n The Multiplication Is : " <<c4 <<endl;
 return 0;
}

// Enter First Number : 
//  Enter Real Part: 
// 4 

//  Enter Imag Part: 
// 96

//  Enter Second Number : 
//  Enter Real Part: 
// 21

//  Enter Imag Part: 
// 36

//  The Addition Is : 25 + 40 i
//  The Multiplication Is : -3372 + 2160 i