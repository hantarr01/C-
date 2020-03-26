#include <iostream>
#include <cstdlib>
using namespace std;

void func(int arr[5][5])
	{
		int i,j;
		for (i=0; i<5; i++){
			for (i=0; i<5; i++){
			arr[i][j] = rand()%10;
			}
		}
	}
	
void func2(int arr[5][5])
	{
		
		int i,j;
		for (i=0; i<5; i++){
			for (j=0; j<5; j++){
			 cout<<arr[i][j]<<" ";
		 	}
		 	cout<<endl;
		}
		
	}
	
void func3(int arr[5][5])
	{
		int i,j;
		for (i=0; i<5; i++){
			for (j=0; j<5; j++){
			 if(j<=i){
			 	arr[i][j] = 0;
			 }
			}
		}
	}
	
int main()
	{
		int arr[5][5];
		func(arr);
		func2(arr);
		cout<<endl;
		func3(arr);
		func2(arr);
		return 0;
	}
