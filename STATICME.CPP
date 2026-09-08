#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class A
{
	int a;
	static int b;
	public:
	void get()
	{
		cout<<"\n enter a : ";
		cin>>a;
		b++;
	}
	void put()
	{
		cout<<"\n a= "<<a<<"\tb= "<<b;
	}
};
int A::b;
void main()
{
	A a1,a2,a3;
	clrscr();
	a1.get();
	a2.put();
	a2.get();
	a2.put();
	a3.get();
	a3.put();
	a1.put();
	getch();
}