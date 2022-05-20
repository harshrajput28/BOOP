#include<iostream.h>
#include<conio.h>
class student
{
public:
int En_no;
char name[10];
char C[20];
int m1,m2,m3;

public:
void getdata()
{
cout<<"Enter enrollment no:";
cin>>En_no;
cout<<"Enter name:";
cin>>name;
cout<<"Enter your course:";
cin>>C;
cout<<"Enter three marks:";
cin>>m1>>m2>>m3;
}

void putdata()
{
cout<<"Enrollment="<<En_no<<endl;
cout<<"Name="<<name<<endl;
cout<<"Course="<<C<<endl;
}
void sum()
{
int total;
total=m1+m2+m3;
cout<<"Total="<<total<<endl;
}
};

int main()
{
student s[50];
int n;
clrscr();
cout<<"Enter number:";
cin>>n;
for(int i=0;i<n;i++)
{
s[i].getdata();
}
for(i=0;i<n;i++)
{
s[i].putdata();
s[i].sum();
}
getch();
return 0;
}




