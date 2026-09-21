#include<iostream.h>
#include<conio.h>
void test();
void main()
{
	clrscr();
	test();
	getch();
}
void test()
{
	int x=10;
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
			cout<<"\nx= "<<x;
		}
	};
	A a1;
	a1.get();
	a1.put();
}