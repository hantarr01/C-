#include <iostream>
using namespace std;
class MyClass{
     public:
     int m;
     char another_n;
     int another_m;
     double n;
MyClass(int x,double y){
      m=x;
      n=y;
}
void show(bool arg){
    if(arg){
        cout<<"m = "<<m<<endl;
        cout<<"another_m = "<<another_m<<endl;
    }
    else{
        cout<<"n = "<<n<<endl;
        cout<<"another_n = "<<another_n<<endl;}
}
}a(1,2.5),b(3,4.8),AB(55,2.28);

int main(){
    int MyClass::*p;
    double *q;
    char *t;
    MyClass *op;
    void (MyClass::*s)(bool arg);
    p=&MyClass::m;
    p=&MyClass::another_m;
    q=&a.n;
    t=&a.another_n;
    s=&MyClass::show;
    op=&b;
    cout<<"a.m: "<<a.*p<<endl;
    cout<<"a.m: "<<AB.*p<<endl;
    cout<<"b.m: "<<op->*p<<endl;
    cout<<"a.n: "<<*q<<endl;
    cout<<"a.another_n: "<<*t<<endl;
    cout<<"a.show():\n";
    (a.*s)(true);
     cout<<"b.show():\n";
     (op->*s)(false);
      return 0;
}


//#include <cstdlib>
//#include <iostream>
//using namespace std;
//
//class MyClass{
//    public:
//    int n;
//    void show(){
//        cout<<"n = "<<n<<endl
//    ;}
//};
//
//int main(){
//MyClass a,b;
//MyClass *p,*q;
//p=&a; q=&b;
//
//p->n=10;
//(*q).n=20;
//p->show();
//(*q).show();
//
//return 0;
//
//}
////
