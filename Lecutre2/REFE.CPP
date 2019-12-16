#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void swap(int &x, int &y);
void swap2(int *x, int *y);
int main()
{
 clrscr();
 int x=50;

 int &y=x;
 int x1=20;
 int x2=30;
 cout<<&x<<endl;
 cout<<&y<<endl;
 getch();
 //testing 1
 /*
 cout<<"======================"<<endl;
 cout<<"x1:"<<&x1<<endl;
 cout<<"x2: "<<&x2<<endl;
 swap(x1,x2);
 cout<<"the x value is"<<x1<<" the value of x2 is "<<x2;
 */
 //testing 2

 cout<<"====================="<<endl;
 cout<<"x1 : "<<&x1<<endl;
 cout<<"x2 : "<<&x2<<endl;
 swap2(&x1,&x2);
 cout<<"the value of x1: "<<x1<<"the value of x2 : "<<x2<<endl;



 getch();

 return 0;
}
void swap(int &x, int &y) //this called by reference
{
  int temp=x;
  x=y;
  cout<<&x<<endl;
  cout<<&y<<endl;
  y=temp;
}
void swap2(int *x, int *y) //this called by address
{
  int temp=*x;
  cout<<&x<<endl;
  cout <<&y<<endl;
  *x =*y;
  *y=temp;
}