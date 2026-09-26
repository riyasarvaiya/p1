#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
	void get()
	{
		cout<<"enter 2 no: ";
		cin>>a>>b;
	}
	void put()
	{
		cout<<"\na= "<<a<<"\tb= "<<b;
	}
	void operator-();
};
void A::operator-()
{
	a=-a;
	b=-b;
}
void main()
{
	A a1;
	clrscr();
	a1.get();
	a1.put();
	-a1;
	a1.put();
	getch();
}