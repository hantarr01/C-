#include <iostream>
#include <cstring>
using namespace std;
 
int main(int argc, char* argv[])
{
    char s1[30] = "I am ";
    char s2[] = "programmer!";
    cout << strcat(s1,s2) << endl;               // ���������� ������ s1 � s2, ��������� ����������� � ������ s1
    char s3[23] = "I am a good ";
    cout << strncat(s3,s2,10) <<  "!!!" << endl; // ���������� 10 �������� ������ s2 �� ������� s3
    return 0;
}

//#include <iostream>
//#include <cstring>
// 
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//  char str1[] = "��";
//  char str2[40];
//  char str3[80];
//  strcpy (str2, str1);                              // �������� ������ str1 � str2
//  strcpy (str3, "����������� ��������� �������\n"); // �������� ������ �� ������ ��������� � str3
//  std::cout << "str1: "   << str1
//            << "\nstr2: " << str2
//            << "\nstr3: " << str3;
//  return 0;
//}
//



//#include <iostream>
//#include <cstring>                        
// 
//int main()
//{
//  setlocale(LC_ALL, "Russian");
//  char input[256];
//  std::cout << "������� ������: ";
//  std::cin >> input;
//  std::cout << "������ " << input << " �������� " << strlen(input) << " ��������\n";
//  return 0;
//}

//#include <iostream>
//#include <cstring>
// 
//int main()
//{
//  setlocale(LC_ALL, "Russian");
//  char str[100];
//  strcpy( str, "Jo" );   
// 
//  strcat( str, "Jo"          );
//  strcat( str, "'s "    );
//  strcat( str, "unbelieveble "      );
//  strcat( str, "adventure" );
// 
//  std::cout << str << std::endl;
//  return 0;
//}



//#include <iostream>
//#include <cstring>
// 
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//  char str1[] = "��";
//  char str2[40];
//  char str3[80];
//  strcpy (str2, str1);                              // �������� ������ str1 � str2
//  strcpy (str3, "����������� ��������� �������\n"); // �������� ������ �� ������ ��������� � str3
//  std::cout << "str1: "   << str1
//            << "\nstr2: " << str2
//            << "\nstr3: " << str3;
//  return 0;
//}
//

