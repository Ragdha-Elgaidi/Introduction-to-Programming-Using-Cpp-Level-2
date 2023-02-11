#include<iostream>
using namespace std; 

int ReadNumber()
{
	int Number;

	cout << "Please enter the Number: " << endl;

	cin >> Number;
	
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Invalid Number , please,enter a valid number:" << endl;
		cin >> Number;

		return Number;
	}

}
int main()
{
	cout << "Your Number is :" << ReadNumber() << endl;

	return 0;
} 
