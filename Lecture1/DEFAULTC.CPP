#include<iostream.h>
#include<conio.h>
#include<stdio.h>
//first lecure
int defaultarg(int i, int y=5,int z=6);
int c=5; //global variable
int main()
{

 clrscr();
 int c=6; //local variable
 cout<<"hello from trubo c"<<endl;
 cout<<defaultarg(10)<<endl<<"the new line"<<endl;
 cout<<"this is a testing of global variable " <<::c<<endl;//print global variable
 cout<<"this is a testing of a local variable " << c<<endl; //print local variable

 getch();
 return 0;
}
int defaultarg(int i, int y, int z)
{
 return i*y*z;
}