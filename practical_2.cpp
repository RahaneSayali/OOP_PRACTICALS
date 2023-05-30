#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
using namespace std;
class personal
{
char bg[3],name[20],dob[10];
float height,weight;
int insu_pno;
char cadd[20];
char ph_no[12];
int dlno;
static int cnt;
public:
friend class derived;
personal()
{
strcpy(name,"Pratyush");
strcpy(dob,"25oct90");
strcpy(bg,"o+");
height=5.4;
weight=47.5;
insu_pno=123;
strcpy(cadd,"Nashik");
strcpy(ph_no,"9087562413");
dlno=234;
}
personal(char name[],char dob[],char bg[],float height,float
weight,int insu_pno,char cadd[],char ph_no[],int dlno)
{
strcpy(this->name,name);
strcpy(this->dob,dob);
strcpy(this->bg,bg);
this->height=height;
this->weight=weight;
this->insu_pno=insu_pno;
strcpy(this->cadd,cadd);
strcpy(this->ph_no,ph_no);
this->dlno=dlno;
}
personal(personal &p)
{
strcpy(p.name,name);
strcpy(p.dob,dob);
strcpy(p.bg,bg);
p.height=height;
p.weight=weight;
p.insu_pno=insu_pno;
strcpy(p.cadd,cadd);
strcpy(p.ph_no,ph_no);
p.dlno=dlno;
}
static void showcount()
{
cnt++;
cout<<"\nCount is : "<<cnt;
}
~personal()
{
cout<<"\nObjects is destroyed.."<<endl;
}
};
class derived
{
public:
void accept(personal &p)
{
cout<<"Enter the name:";
 cin>>p.name;
 cout<<"Enter the date of birth:";
 cin>>p.dob;
 cout<<"Enter the blod group:";
 cin>>p.bg;
 cout<<"Enter height:";
 cin>>p.height;
 cout<<"Enter the weight:";
 cin>>p.weight;
 cout<<"Enter the insurance policy no:";
 cin>>p.insu_pno;
 cout<<"Enter the contact address:";
 cin>>p.cadd;
 cout<<"Enter the phone no:";
 cin>>p.ph_no;
 cout<<"Enter the driving lisence no:";
 cin>>p.dlno;
}
inline void display(personal &p)
{
 cout<<endl;
 cout<<setw(10)<<p.name;
 cout<<setw(10)<<p.dob;
 cout<<setw(4)<<p.bg;
 cout<<setw(7)<<p.height;
 cout<<setw(7)<<p.weight;
 cout<<setw(5)<<p.insu_pno;
 cout<<setw(10)<<p.cadd;
 cout<<setw(12)<<p.ph_no;
 cout<<setw(5)<<p.dlno;
}
};
int personal::cnt;
int main()
{

 personal *d1;
 derived d;
 int i,n;
 cout<<"\nConstructor values...\n";
 cout<<setw(10)<<"NAME";
 cout<<setw(10)<<"DATE";
 cout<<setw(3)<<"BG";
 cout<<setw(7)<<"Height";
 cout<<setw(7)<<"weight";
 cout<<setw(5)<<"IPN";
 cout<<setw(10)<<"ADDRESS";
 cout<<setw(12)<<"PH NO";
 cout<<setw(5)<<"DLN";
personal p("Gauri","24oct93","o-",5.5,50,345,"Dawarka","9430876123",789);
 d.display(p);
 personal::showcount();

 personal p1;
 d.display(p1);
 personal::showcount();
 cout<<"\nEnter how many records u want to insert:";
 cin>>n;
 d1=new personal[n];
 for(i=0;i<n;i++)
d.accept(d1[i]);
 cout<<endl;
 cout<<setw(10)<<"NAME";
 cout<<setw(10)<<"DATE";
 cout<<setw(3)<<"BG";
 cout<<setw(7)<<"Height";
 cout<<setw(7)<<"weight";
 cout<<setw(5)<<"IPN";
 cout<<setw(10)<<"ADDRESS";
 cout<<setw(12)<<"PH NO";
 cout<<setw(5)<<"DLN";
 for(i=0;i<n;i++)
 {
personal::showcount();
d.display(d1[i]);
 }
 return 0;
}
