#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>
#include <cstring>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	
	char tmp_character_empty[20];
	char character_empty[20];
	char character_not_empty[20] = "Ladislav Kovac";
	string string_empty;
	string string_not_empty = "Ladik Kovac";
	
	string tmp;
	string char_tmp;
	cout<<"¬ведите строку дл€ символьного массива = ";
	cin>>character_empty;
	
	cout<<character_empty<<endl;
	cout<<string_empty<<endl;
	
	cout<<character_empty[3]<<endl;
	cout<<string_empty[3]<<endl;
	
	cout<<character_empty[0]<<endl;
	cout<<string_empty[0]<<endl;
	
	tmp = string_empty + string_empty;
	cout<<tmp<<endl;
	
	strcpy(tmp_character_empty,character_empty);
	strcat(character_empty,tmp_character_empty);
	
	cout<<character_empty<<endl;
	
	for (int i=0;i<strlen(character_empty);i++){
		cout<<i+10<<endl;
	}
	
	for(int j=0;j<tmp.size();j++){
		cout<<j<<endl;
	}
	return 0;
}
