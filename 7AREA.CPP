#include<iostream.h>
#include<conio.h>
void p(float,float);
void main()
{
	const float pi=3.14;
	float r;
	clrscr();
	cout<<"enter area"<<endl;
	cin>>r;
	p(pi,r);
	getch();
}
void p(float pi,float r)
{
	int area;
	area = pi * r * r;
	cout<<"area of circle is "<<area;
}