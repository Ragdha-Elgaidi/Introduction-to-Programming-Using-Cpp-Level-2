/*
write a program to ask the user to enter as many employes as he can , as any time user enter an employed add it to your vector
and ask the user if he want to add more etements until he said no
then prints all vector elements on the screen
*/
#include<vector>
#include<iostream>
using namespace std;

struct stEmployee
{
	string FirstName; 
	string LastName; 
	float Salary;
}; 

void ReadEmployee(vector<stEmployee> & vEmployees)
{
	char readmore = 'Y';
	stEmployee tempEmployee;

	while (readmore == 'Y' || readmore == 'y')
	{
		cout << "enter the employee info:" << endl;
		
		cin >> tempEmployee.FirstName;
		cin >> tempEmployee.LastName;
		cin >> tempEmployee.Salary;

		vEmployees.push_back(tempEmployee);

		cout << "Do you want to enter more employees: Y/N" << endl;
		cin >> readmore;
	}
}

void PrintvEmployees(vector<stEmployee>vEmployees)
{
	cout << " Employees vector are :" << endl;

	for (stEmployee Employee : vEmployees)
	{
		cout << Employee.FirstName << endl;
		cout << Employee.LastName << endl;
		cout << Employee.Salary << endl;
	}
	cout<<endl;
}
int main() 
{ 
	vector <stEmployee> vEmployees; 
	stEmployee tempEmployee; 

	ReadEmployee(vEmployees);
	PrintvEmployees(vEmployees);

	return 0; 
}
