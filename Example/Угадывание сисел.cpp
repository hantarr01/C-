#include <iostream>
using namespace std;

int main()
{
	
    setlocale(LC_ALL, "Russian");
    int lower = 1; // ������ ������� ���������
    int upper = 100; // ������� ������� 
    int middle; // ��������
 
    char answer;
 
    while(lower != upper)
    {
        middle = (upper + lower) / 2;
        std::cout << "���������� ����� ������ " << middle << "? (y/n)";
        std::cin >> answer;
 
        if(answer == 'y')
            upper = middle;
        else
            lower = middle;
 
        std::cout << "[" << lower << " : " << upper << "]\n";
    }
 
    std::cout << "���� ����� =  " << lower << "\n";
    
    system("pause");
    return 0;
}
