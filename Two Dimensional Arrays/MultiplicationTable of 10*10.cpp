#include<iostream>
#include<cstdio>
using namespace std; 

int main()
{
    //int x[Rows][Cols];
    int x[10][10];
    for (int i = 0; i < 10; i++)
    {
    for (int j = 0; j < 10; j++)
    {
        x[i][j] = (i + 1) * (j + 1);
    }
    }
    for (int i = 1; i <= 10; i++)    
    { 
        for (int j = 1; j <= 10; j++) 
        {          
            printf("%0*d ", 2, x[i-1][j-1]);
        }    
        cout << endl;    
    } 
    return 0;
}
