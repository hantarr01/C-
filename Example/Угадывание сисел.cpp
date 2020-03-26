#include <iostream>
using namespace std;

int main()
{
	
    setlocale(LC_ALL, "Russian");
    int lower = 1; // нижн€€ граница диапазона
    int upper = 100; // верхн€€ граница 
    int middle; // середина
 
    char answer;
 
    while(lower != upper)
    {
        middle = (upper + lower) / 2;
        std::cout << "«адуманное число меньше " << middle << "? (y/n)";
        std::cin >> answer;
 
        if(answer == 'y')
            upper = middle;
        else
            lower = middle;
 
        std::cout << "[" << lower << " : " << upper << "]\n";
    }
 
    std::cout << "¬аше число =  " << lower << "\n";
    
    system("pause");
    return 0;
}
