#include<iostream.h>
#include<conio.h>
int &max(int&, int&);
int main()
{
int a,b,c;
clrscr();
cout<<"Enter a:";
cin>>a;
cout<<"Enter b:";
cin>>b;

//normal call
c=max(a,b);
cout<<"Maximum:"<<b<<endl;

// left side call
max(a,b)=0;
cout<<"Left side call"<<endl;
cout<<"A="<<a<<endl;
cout<<"B="<<b<<endl;
getch();
return 0;
}
int &max(int &x, int &y)
{
return(x<y?x:y);
}





