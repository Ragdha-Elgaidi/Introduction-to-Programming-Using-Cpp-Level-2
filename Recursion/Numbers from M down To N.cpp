#include<iostream>
using namespace std; 

void PrintNumbersFromNtoM(int N, int M)
{ 
	if (N <= M)   
    {      
		cout << M << endl;    
		PrintNumbersFromNtoM(1, M-1 ); 
	} 
} 

int main() 
{    
	PrintNumbersFromNtoM(1, 10);
	return 0;
} 
