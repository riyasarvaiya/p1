#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
	A(int x, int y)
	{
		cout<<"\nparametrized constructer";
		a=x;
		b=y;
	}
	void put()
	{
		cout<<"\na= "<<a<<"\t b= "<<b;
	}
};
void main
{
	int x,y;
	clrscr();
	cout<<"\nenter 2 no: ";
	cin>>x>>y;
	A a1(x,y);
	a1.put();
	getch();
}