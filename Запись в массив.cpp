#include <iostream> 

using namespace std; 
int main()
 {
 	setlocale( LC_ALL,"Russian" );
 	
 	cout<<"Введите число:"<<endl;
 	
  	int array[10],i;
  	
  	for(i=1; i<=10; i++)
	{  
	
		Запись чисел в массив
	
  		cout<<"Ваше число "<<i<<" в массиве ";
  		cin>>array[i];
  		cout<<"Число введенно в массив."<<endl;
  		cout<<endl;
	}  
	
 	 return 0; 
 } 

