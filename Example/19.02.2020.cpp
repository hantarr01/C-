#include<iostream> 
#include <cmath> 
using namespace std; 

int main(){ 
setlocale(LC_ALL, "Russian");
const double g=9.8;
double x,y,t,u,a;

	cout<<"���� ������:";
	cin>>a;

	cout<<"��������� �������� ����(�/�):";
	cin>>u;

	cout<<"����� ��������(���):";
	cin>>t;

	x= u*t*cos(a);
	y=u*t*sin(a)-((g*pow(t,2))/2);


	cout<<"Y = "<<y<<endl;
	cout<<"X = "<<x<<endl;
	
}
