#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class result
{
	int rn;
	char nm[20];
	int m[3];
	int total;
	public:
	void get();
	void put();
};
void result :: get()
{
	cout<<"enter rno, name , mark of 3 sub : ";
	cin>>rn>>nm;
	total=0;
	for(int i=0;i<3;i++)
	{
		cin>>m[i];
		total += m[i];
	}
}
void result :: put()
{
	cout<<endl<<rn<<"\t"<<nm;
	for(int i=0;i<3;i++)
	cout<<"\t"<<m[i];
	cout<<"\t"<<total;
}
void main()
{
	result r[2];
	clrscr();
	for(int i=0;i<2;i++)
	r[i].get();
	cout<<"\nrno \tname \tm1 \tm2 \tm3 \ttotal ";
	for(i=0;i<2;i++)
	r[i].put();
	getch();
}