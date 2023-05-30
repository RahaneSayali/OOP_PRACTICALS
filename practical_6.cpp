#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int age;
int car;
double income;
char city[20];
cout<<"\nEnter age of person:";
cin>>age;
try
{
if(age<18 || age>55)
{
throw age;
}
else
{
cout<<"\nAge is="<<age;
}
}
catch(int)
{
cout<<"\nAge is not in between 18-55";
}
cout<<"\nEnter income of person:";
cin>>income;
try
{
if(income<50000 || income>100000)
{
throw income;
}
else
{
cout<<"\nIncome is="<<income;
}
}
catch(double)
{
cout<<"\nIncome is not in the range of 50000-100000";
}
cout<<"\nEnter city of person:";
cin>>city;
try
{
if(strcmp(city,"Pune") && strcmp(city,"Mumbai") &&
strcmp(city,"Banglore") && strcmp(city,"Chennai"))
//if(city!="Pune" && city!="Mumbai" && city!="Banglore" &&city!="Chennai")
{
throw city;
}
else
{
cout<<"\nCity is="<<city;
}
}
catch(char[])
{
cout<<"\nPerson is not staying in the Pune/Mumbai/Banglore/Chennai";
}
cout<<"\nEnter type of car (2 wheeler or 4 wheeler) of person:";
cin>>car;
try
{
if(car!=2 && car!=4)
{
throw car;
}
else
{
cout<<"\nvehicle is="<<car;
}
}
catch(int)
{
cout<<"\nPerson is not holding 2 wheeler or 4 wheeler";
}
return 0;
}
