#include <iostream>
//#include <string>
//#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
char f;
int h1,h2,m,s,i,n,b;
int total;
int score[s];

cout<<" - You want to play in bones?(Write 'Y' if you want)"<<endl;
cout<<" - ";
cin>>f;

        for(b = 0; b < 6; b++){
            h1 = rand() % 6 +1;
        }

if(f=='y'){
    cout<<"* You threw bones *"<<endl;




}else{
    cout<<" - Ok, we played in next time";
    }

return 0;
}

int core(){
int h1,h2,m,s,i,n,b;
int total;
int score[s];

    for(i = 1; i < 6; i++){


        total = h1;

         if(total==1,total==5){
           score[s] = total;
           cout<<"Bone"<<i<<": "<<score[s]<<endl;
        }else{
           cout<<"Bone"<<i<<": "<<" loose drop "<<endl;
        }

}
}
