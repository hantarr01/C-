#include <iostream>
using namespace std;
class MyClass{
    public:
    double x;
    char h[10]{'l','u','p','a'};
};

double f1(MyClass obj){
    obj.x*=228;
    return obj.x;
}
double f2(MyClass &obj){
    obj.x*=10;
    return obj.x;
}
int main(){
    int i=0;
    MyClass obj;
    obj.x=5;
    for (i=0; i<8; i++){
       cout<<"ANOTHER "<<obj.h<<endl;
    }
    cout<<"x = "<<f1(obj)<<endl;
    cout<<"x = "<<obj.x<<endl;
    cout<<"x = "<<f2(obj)<<endl;
    cout<<"x = "<<obj.x<<endl;
return 0;
}



//#include <iostream>
//using namespace std;
//class MyClass{
//    public: double x;
//    };
//
//int main(){
//    MyClass obj;
//    MyClass &ref=obj;
//    obj.x=10;
//    cout<<"x = "<<ref.x<<endl;
//    ref.x=100;
//    cout<<"x = "<<obj.x<<endl;
//return 0;
//}
