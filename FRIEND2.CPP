#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class B;
class A
{
	int a;
	public:
	void get()
	{
		cout<<"enter a: ";
		cin>>a;
	}
	void put()
	{
		cout<<"\na= "<<a;
	}
	friend int sum(A x,B y);
};
class B
{
	int b;
	public:
	void get()
	{
		cout<<"enter b: ";
		cin>>b;
	}
	void put()
	{
		cout<<"\nb= "<<b;
	}
	friend int sum(A x,B y);
};
int sum(A x,B y)
{
	return(x.a + y.b);
}
void main()
{
	A a1;
	B b1;
	clrscr();
	a1.get();
	b1.get();
	a1.put();
	b1.put();
	cout<<"\n\nsum= "<<sum(a1,b1);
	getch();
}