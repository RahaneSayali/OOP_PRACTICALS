#include<iostream>
#include<iomanip>
using namespace std;
class complex
{
public:
float real,img;
complex()
{
real=0;
img=0;
}
complex operator +(complex);
complex operator *(complex);
friend ostream &operator <<(ostream &,complex &);
friend istream &operator >>(istream &,complex &);
};
istream &operator >>(istream &is,complex &obj)
{
is>>obj.real;
is>>obj.img;
return is;
}
ostream &operator <<(ostream &out,complex &obj)
{
out<<" "<<obj.real;
out<<"+"<<obj.img<<"i";
return out;
}
complex complex::operator+(complex obj)
{
complex temp;
temp.real=real+obj.real;
temp.img=img+obj.img;
return temp;
}
complex complex::operator*(complex obj)
{
complex temp;
temp.real=real*obj.real-img*obj.img;
temp.img=img*obj.real+real*obj.img;
return temp;
}
int main()
{
complex a,b,c,d;
int ch;
cout<<"\n The first complex number is:";
cout<<"\nEnter real and img:";
cin>>a;
cout<<"\n The second complex number is:";
cout<<"\nEnter real and img:";
cin>>b;
do
{
cout<<"Enter Your Choice\n1.Adition\n2.Multiplication\n3.Exit\n";
cin>>ch;
switch(ch)
{
case 1:
c=a+b;
cout<<"\n Addition=";
cout<<c<<endl;
break;
case 2:
d=a*b;
cout<<"\n Multiplication=";
cout<<d<<endl;
break;
}
}
while(ch!=3);
return 0;
}

