#include <iostream>
#include <cstdlib>
using namespace std;
class Class2;
class Class1{
    double x;
public:
    Class1(double z){
        x = z;}
    friend double show(Class1 a, Class2 b);
};

class Class2{
    double y;
public:
    Class2(double z){
        y = z;}
    friend double show(Class1 a, Class2 b);
};

double show(Class1 a, Class2 b){
   return a.x*b.y;
}

int main(){
    int i;
    double arr[5];
    Class1 objs1[]={Class1(25),Class1(256),Class1(456)};
    Class2 objs2[]={Class2(2),Class2(3),Class2(4)};
    for(i=0;i<3;i++){
        arr[i]=show(objs1[i],objs2[i]);
        cout<<arr[i]<<endl;
    }
    return 0;
}





// using namespace std;
//class MyClass{
//      public:
//          double x;
//    MyClass(double z){
//     x = z;
//    }
//};
//
//int main(){
//    int i;
//    int arr[3];
//
//    MyClass objs1[]={MyClass(25),MyClass(3),MyClass(4)};
//    MyClass objs2[]={MyClass(2),MyClass(3),MyClass(4)};
//for(i=0;i<3;i++){
//    arr[i]=objs1[i].x*objs2[i].x;
//    cout<<i+1<<": ";
//    cout<<arr[i]<<endl;
//    }
//
//return 0;
//}
