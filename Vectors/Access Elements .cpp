#include<iostream>
#include<vector>
using namespace std; 

int main() 
{ 
	vector<int> num{ 1, 2, 3, 4, 5 }; 

	cout<<"\n\n using .at(i) \n"; 
	cout<<"Element at Index 0: " << num.at(0) << endl; 
	cout<<"Element at Index 2: " << num.at(2) << endl;
	cout<<"Element at Index 4: " << num.at(4) << endl;    

	cout<<"\n\n using [i]\n";   
	cout<<"Element at Index 0: " << num[0] << endl;  
	cout<<"Element at Index 2: " << num[2] << endl;  
	cout<<"Element at Index 4: " << num[4] << endl; 

	return 0; 
}
