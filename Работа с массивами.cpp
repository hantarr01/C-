#include<iostream>
using namespace std;
void shoW (int n[][3], int size){
	int i,j;
	for (i=0; i<size; i++){
		for (j=0; j<3; j++){
			cout<<n[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main(){
int n[][3] = {{1,2,3,},{4,5,6}};
	shoW (n,2);
	return 0;
}



void show(int *n, int m){
	for (int i=0; i<m; i++){
		cout<<"n["<<i<<"]="<<n[i]<<endl;
	} 
}



//void show(int *n, int m){
//
//	for (int i=0; i<m; i++){
//		cout<<"ni["<<i<<"]="<<n[i]<<"\n";
//	}
//		
//		for (int j=0; j<m; j++){
//			cout<<"nj["<<j<<"]="<<n[j]<<"\n";
//		} 
//	 
//}
//
//void sort(int s, int m, int *n){
// 	int s=1;
//	
//	if(*n[i][j]=s){
//		for(int i=0; i<m; i++){
//		int *n[i][j] = *n[0][0];
//		int s++;
//		cout<<
//		}	
//	}
//	
//}
//
//int main(){
//	int n[3][3]={1,2,3,4,5,6,7,8,9};
//	show(*n,9);
//	return 0;
//}




//int main(){
//	int n[5]={1,2,3,4,5};
//	show(n,3);
//	show(n,5);
//	return 0;
//}
//
//
//
//void show(int n[5]){
//	for (int i=0; i<5; i++){
//		cout<<"[n"<<"]="<<n[i]<<endl;
//	}
//}	
//
//int main(){
//	int n[5]={1,2,3,4,5};
//	show(n);
//	return 0;
//}
