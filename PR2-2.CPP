#include<iostream.h>
#include<conio.h>
int main()
{
int i,j,n;
clrscr();
cout<<"Enter the number";
cin>>n;
for(i=n;i>=1;i--)
{
for(j=1;j<=i;j++)
{
cout<<"*";
}
cout<<"\n";
}
getch();
return 0;
}
