//Write a program of find the simple interest using constructor with dynamic initialization. Make constructor like Interest (int principal, int year, int rate) Interest (int principal, int year, float rate = 2.5)

#include<iostream>
using namespace std;
class Interest{
        int simple_interest;
    public:
    Interest(int principle, int year, int rate){
        simple_interest=(principle*rate*year)/100;
        cout<<"Simple Interest is: "<<simple_interest<<endl;
    }
    Interest(int principle, int year, float rate=2.5f){
        simple_interest=(principle*rate*year)/100;
        cout<<"Simple Interest is: "<<simple_interest<<endl;
    }
};
main(){
    Interest* i=new Interest(12000,2,8);//dynamic allocation of overeloaded constructor..
    Interest* i1=new Interest(34000,1);
    Interest* i3 = new Interest(20,5,3.2f);
    //Interest* i2=new Interest(34000,1,2.1);//why does it not allow overlapping here ...
    delete i,i1,i3;
}