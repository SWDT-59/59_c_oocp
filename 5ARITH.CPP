#include<iostream.h>
#include<conio.h>
int add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
//int a,b;
void main()
{
int a,b;
	int r;
	clrscr();
	cout<<"enter value A->";
	cin>>a;
	cout<<"enter value b->";
	cin>>b;
	r=add(a,b);//r=x
	cout<<r<<endl;
	sub(a,b);
	mul(a,b);
	div(a,b);
	getch();
}
int add(int a,int b)
{
	int x;
	x=a+b;
	return(x);
}
void sub(int a,int b)
{
	int t;
	t=a-b;
	cout<<t<<endl;
}
void mul(int a,int b)
{
	int y;
	y=a*b;
	cout<<y<<endl;
}
void div(int a,int b)
{
	int z;
	z=a/b;
	cout<<z<<endl;
}