#include<iostream>
using namespace std;
#define Size 10
int n;
template <class T>
void selection(T a[Size])
{
int i,j;
T temp;
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[j]<a[i])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
cout<<"\nAfter Pass"<<i+1;
for(int k=0;k<n;k++)
{
cout<<"\t"<<a[k];
}
}
cout<<endl;
cout<<"\n The sorted List Is...\n";
for(i=0;i<n;i++)
cout<<"\t"<<a[i]<<endl;
}
int main()
{
int i,a[Size];
float b[Size];
cout<<"\n Integer Numbers";
cout<<"\nHow many elements are there?";
cin>>n;
cout<<"\nEnter the Integer Numbers"<<endl;
for(i=0;i<n;i++)
cin>>a[i];
selection(a);
cout<<"\n Float Numbers";
cout<<"\nHow many elements are there?";
cin>>n;
cout<<"\nEnter the float Numbers"<<endl;
for(i=0;i<n;i++)
cin>>b[i];
selection(b);
return 0;
}
