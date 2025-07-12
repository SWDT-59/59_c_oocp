#include<iostream.h>
#include<conio.h>
void swap(int,int );
void main()
{       int n1,n2=5;
	clrscr();
	cout<<"enter no1"<<endl;
	cin>>n1;
	cout<<"before swaping"<<n1<<endl<<n2<<endl;
	/*cout<<"enter no2"<<endl;
	cin>>n2;*/
	swap(n1,5);
	getch();
}
void swap(int n1,int n2)
{
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"after swaping"<<endl<<n1<<endl<<n2;
}