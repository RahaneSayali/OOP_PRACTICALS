#include<iostream>
using namespace std;
class publication
{
public:
char title[20];
float price;
virtual void read()
{
cout<<"\nEnter the title:";
cin>>title;
cout<<"\nEnter the price:";
cin>>price;
}
virtual void show()
{
    cout<<"Title:"<<title<<endl;
cout<<"Price:"<<price<<endl;
}
};
class book:public publication
{
public:
int page_count;
void read()
{
cout<<"\nEnter the no of pages:";
cin>>page_count;
}
void show()
{
cout<<"Page Count of book:"<<page_count<<endl;
}
};
class tape:public publication
{
public:
float playtime;
void read()
{
cout<<"\nEnter the time in minutes:";
cin>>playtime;
}
void show()
{
cout<<"Playing time in tape:"<<playtime<<endl;
}
};
int main()
{
publication *ptr;
publication obj;
book b;
tape t;
obj.read();
obj.show();
ptr=&b;
ptr->read();
ptr->show();
ptr=&t;
ptr->read();
ptr->show();
return 0;
}

