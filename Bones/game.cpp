#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
using namespace std;

int Core(int TotalInMass){
    srand(time(0));
    int TotalRand;
    int throws=6;

    for (int i = 0; i < throws; i++){
        if(TotalRand = 5){
            throws--;
            for (int i = 0; i < throws; i++){
                TotalRand = (rand() % 6 +1);
                cout<<"Throw "<<i<<": "<<TotalRand<<endl;
            }
            cout<<endl;
        }else{
            if(TotalRand = 1){
                throws--;
                for (int i = 0; i < throws; i++){
                    TotalRand = (rand() % 6 +1);
                    cout<<"Throw "<<i<<": "<<TotalRand<<endl;
                }
                cout<<endl;
            }
        }

    }
}


void SaveValues(int nP,int nC){
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

    if(enter == 'n'){
        cout<<"Exit..."<<endl;
        exit(1);
    }else{
        Core(5);
    }

return 0;
}
