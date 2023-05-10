//Write a program to find the multiplication values and the cubic values using inline function.
#include<iostream>
using namespace std;
class A{
    int calc;
    public:
    inline void multi(int a,int b){
        calc=a*b;
        cout<<"MULTIPLICATION IS: "<<calc<<endl;
    }
    inline void cubic(int a){
        calc=a*a*a;
        cout<<"Cubic value of "<<a<<" is "<<calc;
    }
};
main(){
    A a1;
    a1.multi(10,20);
    a1.cubic(4);
}