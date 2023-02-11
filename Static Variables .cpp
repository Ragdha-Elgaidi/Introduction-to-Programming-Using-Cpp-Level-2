#include<iostream>
using namespace std; 

void MyFunc() 
{ 
	static int Number = 1; 
  cout << "Value of Number: " << Number << "\n";  
	Number++;
}

void MyFunc1()
{
	int Number = 1;
	cout << "Value of Number: " << Number << "\n";
	Number++;
}

int main() 
{
	MyFunc();//1
	MyFunc();//2
	MyFunc();//3

	MyFunc1();//1
	MyFunc1();//1
	MyFunc1();//1

	return 0; 
}
