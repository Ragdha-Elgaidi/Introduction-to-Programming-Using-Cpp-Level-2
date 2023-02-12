#include<iostream>
using namespace std; 

int main()
{ 
	float a = 10; 
	 
	cout <<"a value = " << a << endl;  
	cout << "a address = "<< & a << endl;

	float * p;   
	p = &a;   
	
	cout << "Pointer Value = " << p;
	cout << endl; 

	return 0;
}
