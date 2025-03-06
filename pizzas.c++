#include <iostream>
using namespace std;

int main () {
        int np, pizzas, nt, ntp, nts;
        cout << "Bienvenidos a telepizza, Cuantos son?" << endl;
        cin >> np;
        cout << "Cuantas pizzas van a querer?" << endl;
        cin >> pizzas;
        

        nt= pizzas*8;
        ntp=nt/np;
        nts=nt-ntp*np;

        cout <<"Perfecto tocaran a "<<ntp<< " trozos por persona"<<endl;
        cout << "Ademas, sobraran "<<nts<<" trozos"<<endl;



    return 0;
}