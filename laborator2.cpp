#include <iostream>

using namespace std;

class stud{
    char num[24];
    int note[5], mat;
public:
    stud();
    void read();
    void show();
    void mod();
};

stud::stud(){ mat = 69; }

void stud::read(){
    cout<<"Nume: "; cin>>num;
    for(int i=0; i<5; i++){
        cout<<"Nota #"<<i+1<<": "; cin>>note[i];
    }
}

void stud::show(){
    int tmp=0;
    cout<<"\n\n\n--- AFISARE ---"<<"\nNume: "<<num<<"\nNr. mat.: "<<mat<<"\nNote: ";
    for(int i=0; i<5; i++) {cout<<note[i]<<" "; tmp+=note[i];}
    cout<<"\nMedia: "<<tmp/5;
}

void stud::mod(){
    int tmp;
    cout<<"\n\n\n--- MODIFICARE NOTE ---\nNote actuale: ";
    for(int i=0; i<5; i++) cout<<note[i]<<" ";
    cout<<"\nCe nota doresti sa modifici (de la 1 la 5): "; cin>>tmp;
    cout<<"Introdu o nota noua pentru "<<note[tmp-1]<<" cu numarul de ordine #"<<tmp<<": "; cin>>note[tmp-1];
    cout<<"\nModificat cu succes!\nNoul sir de note: ";
    for(int i=0; i<5; i++) cout<<note[i]<<" ";
}

int main(){
    stud s;
    s.read();
    s.show();
    s.mod();
    s.show();
    return 0;
}
