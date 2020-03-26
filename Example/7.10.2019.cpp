#include <iostream>
using namespace std;
 
 const int I=100;
 int main()
 { 
 	double x,q,s=0;
 	int i;
	cout<<"x=";
	cin>>x;
	q=x;
	  
		for(i=1;i<=I;i++)
 	{  
		s+=q;
		q*=(-1)*x*x/(2*i-1)/(2*i);
 	}
 	
 cout<<"cos("<<x<<") = "<<s<<endl; 
 
 return 0;
 }

