#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int add(int x,int y);
int add(int x,int y,int z);
void main()
{
	int a,b,c,d;
	clrscr();
	cout<<"enter no : ";
	cin>>a>>b>>c;
	d=add(a,b);
	cout<<"\n sum of 2 argument function: "<<d;
	d=add(a,b,c);
	cout<<"\nsum of 3 argument function : "<<d;
	getch();
}
int add(int x,int y)
{
return(x+y);
}
int add(int x,int y,int z)
{return (x+y+z);}