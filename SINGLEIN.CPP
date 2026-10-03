#include<conio.h>
#include<iostream.h>
class A
{
	int a;
	public:
	void getA()
	{
		cout<<"\nenter a: ";
		cin>>a;
	}
	void putA()
	{
		cout<<"\na= "<<a;
	}
};
class B : public A
{
	int b;
	public:
	void getB()
	{
		cout<<"\nenter b: ";
		cin>>b;
	}
	void putB()
	{
		cout<<"\nb= "<<b;
	}
};
void main()
{
	A a1;
	B b1;
	clrscr();
	a1.getA();
	a1.putA();
	b1.getA();
	b1.getB();
	b1.putA();
	b1.putB();
	getch();
}