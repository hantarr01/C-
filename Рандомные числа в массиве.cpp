#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

void printArray(int array[][3], const int row, const int column)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
          cout << setw(4) << array[i][j];
        cout << endl;
    }
}

int main()
{
    const int row = 3, column = 3;
    int array[row][column]; 
	int tmp,i,j;      
    srand(time(NULL));
    for(int i = 0; i < row; i++)   
        for(int j = 0; j < column; j++)  
				array[i][j] = 1 + rand() % 9;
				tmp  = array[i][j];
		if(array[i][j]==tmp){
			array[i][j] = 1 + rand() % 9;
		}
    printArray(array, row, column);   
}

