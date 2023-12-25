#include <iostream>
#include <math.h>
using namespace std;

class nComp{
    private:
        float r,i;
    public:
    void read(){
        cout<<"Partea reala="; cin>>r;
        cout<<"Partea imaginara=";cin>>i;
    };

    void write() {cout<<r<<"+"<<i<<"i\n";}

    nComp sum(nComp a, nComp b){
        nComp tmp;
        tmp.r=a.r+b.r;
        tmp.i=a.i+b.i;
        return tmp;
    };

    nComp dif(nComp a, nComp b){
        nComp tmp;
        tmp.r=a.r-b.r;
        tmp.i=a.i-b.i;
        return tmp;
    };
};

int main(){
    nComp a, b, summ, diff;
    cout<<"Citire A:\n"; a.read();
    cout<<"Citire B:\n"; b.read();
    summ = summ.sum(a,b);
    cout<<"\nA+B="; summ.write();
    diff = diff.dif(a,b);
    cout<<"\nA-B="; diff.write();
}
