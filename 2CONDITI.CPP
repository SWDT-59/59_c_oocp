#include<iostream.h>
#include<conio.h>
void main()
{
	int n1,n2;
	clrscr();
	cout<<"enter no1->";
	cin>>n1;

	cout<<"enter no2->";
	cin>>n2;

	if(n1>n2)
	{
		cout<<n1<<"greater than"<<n2;
	}
	else
	{
		cout<<n2<<"greater than"<<n1;
	}
	getch();
}