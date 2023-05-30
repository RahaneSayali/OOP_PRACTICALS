#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
class sample
{
public:
int roll;
char name[20];
void accept()
{
cout<<"\nEnter the roll no:";
cin>>roll;
cout<<"\nEnter the name:";
cin>>name;
}
void display()
{
cout<<roll<<"\n";
cout<<name<<"\n";
}
};
int main()
{
sample obj;
ofstream os;
os.open("Home:\\test.txt",ios::in|ios::out);
if(!os)
{
cerr<<"Could not open output file\n";
exit(1);
}
cout<<"Writing the contents to the file...\n";
obj.accept();
os.write((char *)&obj,sizeof(obj));
if(!os)
{
cerr<<"Could not write to file\n";
exit(1);
}
os.close();
ifstream is;
is.open("Home:\\test.txt",ios::in|ios::out);
if(!is)
{
cerr<<"Could not open input file\n";
exit(1);
}
cout<<"Reading the contents from the file...\n";
obj.display();
is.read((char *)&obj,sizeof(obj));
if(!is)
{
cerr<<"Could not read from file\n";
exit(1);
}
return 0;
}
