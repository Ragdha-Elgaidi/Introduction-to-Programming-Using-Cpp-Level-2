#include<iostream>
using namespace std; 

void Function1(int x) 
{
	x++;
} 

void Function2(int & x)
{
	x++;
}

int main()
{ 
	int a = 10; 
	Function1(a); 
    cout << "\n a after calling function1 = " << a << endl; //10
	cout << &a << endl;

	Function2(a);
	cout << "\n a after calling function2 = " << a << endl;//11
	cout << &a << endl;

	return 0;
}
