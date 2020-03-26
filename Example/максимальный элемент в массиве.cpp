#include <iostream> 
using namespace std;
int main(){

	int m[5] = {1, -1, 0, 4, 2};
	int max = m[0];
	for(int i = 0; i < 5; ++i){
    	if(m[i] > max){
        	max = m[i];
   		}
	}
	cout<<max;
}
