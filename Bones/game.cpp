#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
using namespace std;

int GenerateRand(int throws){
    srand(time(0));
    int TotalRand;

    for ( throws = 1; throws < 6; throws++){
       TotalRand = (rand() % 6 +1);
       cout<<"Throw "<<throws<<": "<<TotalRand<<endl;
    }

return 0;
}

int CheckValues(int TotalRand, int TotalInMass){
    int throws;

    for (int i = 0; i < 6; i++){
        if(TotalRand == 5){
            if(TotalInMass == 5){

            }
        }
    }
}

int SaveValues(int nP,int nC){
    int n;
    int arrP[n];
    int arrC[n];
}

int LogoGame(){
    cout<<"-------------------------"<<endl;
    cout<<"|=========BONES=========|"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<endl;
    cout<<"To begin a game?(Write n/y)"<<endl;
}

int main (){
    char enter;

    LogoGame();

    cin>>enter;
    cout<<endl;

    if(enter=='n'){
        cout<<"Exit..."<<endl;
        exit(1);
    }else{
        GenerateRand(6);
        //CheckValues(GenerateRand());
    }

return 0;
}
