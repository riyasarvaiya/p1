#include<iostream.h>
#include<conio.h>
inline int add(int a,int b)
{
	return (a+b);
}
void main()
{
	int a,b;
	clrscr();
	cout<<"enter 2 number: ";
	cin>>a>>b;
	cout<<"\n sum= "<<add(a,b);
	getch();
}