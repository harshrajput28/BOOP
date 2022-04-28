#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int a=1;
int main()
{
int a=3;
float PI=3.14;
clrscr();
cout<<setw(10)<<setfill('*')<<endl;
cout<<a<<endl;
cout<<::a+a<<endl;
cout<<setprecision(1)<<PI;
return 0;
}

