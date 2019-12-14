#include<iostream>
#include <conio.h>
using namespace std;
int PrintFunction(int x=10, int i=20 , int z=30);
int x = 6;

int main()
{
	int x = 5;
	cout << "Hello The First Program in C ++" << endl;
	cout << PrintFunction(5)<<endl;
	cout << ::x<<endl;
	cout << x << endl;

	_getch();
	return 0;
}
int PrintFunction(int x, int i, int z)
{
	
	return x * i*z;
}