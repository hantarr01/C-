#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
	setlocale(LC_ALL, "Russian");
    double a;
    double b;
    double c;
    double x;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    if((b*b - 4*a*c) >= 0) //���� ������������ ������ ��� ����� 0
    {
        x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "������ ������ ����� " << x << endl;
        x = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "������ ������ ����� " << x << endl;
    }
    else
    {
        cout << "������������ ������ ����." << endl;
    }
 
    return 0;
}
