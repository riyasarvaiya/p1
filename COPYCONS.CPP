#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
	A()
	{
		cout<<"\ndefault const";
		a=0;
		b=0;
	}
	A(int x,int y)
	{
		cout<<"\nparameterized const";
		a=x;
		b=y;
	}
	A(A &a1)
	{
		cout<<"\ncopy const";
		a=a1.a;
		b=a1.b;
	}
	void put()
	{
		cout<<"\na= "<<a<<"\tb= "<<b;
	}
};
void main()
{
	int x,y;
	clrscr();
	cout<<"enter 2 no: ";
	cin>>x>>y;
	A a1;
	A a2(x,y);
	A a3=a2;
	a1=a2;
	a1.put();
	a2.put();
	a3.put();
	getch();
}