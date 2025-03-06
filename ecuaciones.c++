#include <iostream>
using namespace std;
#include <math.h>

int main (){
   float a,b,c,x1,x2, r, d;
    cout <<"Bienvenido a la calculadora de ecuaciones 2000"<<endl;
    cout <<"Introduzca su variable a: ";
    cin>>a;    
    cout <<"Introduzca su variable b: ";
    cin>>b;
    cout <<"Introduzca su variable c: ";
    cin>>c;

    r=sqrt(pow(b,2 - 4 * a* c));
    d=2*a;
    x1=(-b+r)/d;
    x2 =(-b-r)/d;

    cout << "Espere, estamos calculando.";
    system ("pause");
    system ("cls");

    cout <<"Ya tenemos los resultados: "<< endl; 
    cout << "El valor de x1 = "<<x1<< endl;
    cout << "El valor de x2 = "<<x2<< endl;

    cout <<"Gracias por usar mis servicios"<< endl;

    return 0;
}