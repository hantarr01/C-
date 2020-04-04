#include <iostream>
using namespace std;

class SimpleClass{
    public:
    int m;
    int n;
    int i;

SimpleClass(int a, int b){
    m=a;
    n=b;
    cout<<"Object has been created"<<endl;
}

~SimpleClass(){
    cout<<"Object has been deleted"<<endl;
}

void show(){
    cout<<"m = "<<m<<endl;
    cout<<"n = "<<n<<endl;
}

int loop(){

     for(i = 1; i < n; i++){
        cout<<"loop:"<<i<<endl;
     }
}

int mass(){
    int ar[n];
    for(i = 0; i < n; i++){
        ar[n]=m;
        cout<<"Array = "<<ar[n]<<endl;
        }
    }
};


int main(){
    setlocale(LC_ALL,"rus");

    int ent,tot;
    cout<<"Введите размер массива ";
    cin>>tot;
    cout<<endl;

    for(int i = 1; i <tot ; i++){
        cout<<"Значения массива ";
        cin>>ent;
        cout<<endl;
    }

    SimpleClass obj(ent,tot);
    obj.show();
    obj.loop();
    obj.mass();

return 0;
}
