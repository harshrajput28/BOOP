#include<iostream.h>
#include<conio.h>
class Employ
{
public:
int Emp_id;
char Emp_name[10];
char Emp_dept[20];

public:
void getdata()
{
cout<<"Enter Employ Id:";
cin>>Emp_id;
cout<<"Enter Employ name:";
cin>>Emp_name;
cout<<"Enter Employ dept:";
cin>>Emp_dept;
}

void putdata()
{
cout<<"ID="<<Emp_id<<endl;
cout<<"Name="<<Emp_name<<endl;
cout<<"Dept="<<Emp_dept<<endl;
}
};

int main()
{
Employ e[50];
int n;
clrscr();
cout<<"Enter Employ number:";
cin>>n;
for(int i=0;i<n;i++)
{
e[i].getdata();
}
for(i=0;i<n;i++)
{
e[i].putdata();
}
getch();
return 0;
}
