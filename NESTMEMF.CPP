#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class demo
{
	int a;
	float b;
	char c;
	void get();
	public:
	void put()
	{
		get();
		cout<<"\na= "<<a;
		cout<<"\nb= "<<b;
		cout<<"\nc= "<<c;
	}
};
void demo :: get()
{
	cout<<"\nenter a,b,c: ";
	cin>>a>>b>>c;
}
void main()
{
	demo d1;
	clrscr();
	d1.put();
	getch();
}