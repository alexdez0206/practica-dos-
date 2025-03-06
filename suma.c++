#include <iostream>
using namespace std;

int main (){
    int a, b, total;

    cout <<"Por favor ingresa dos numeros para sumarlos"<< endl;
    cin >> a;
    cin >> b;

    total = a + b;
    system("pause");
    system ("cls");

    cout << "la suma de los numeros ingresados es: "<<total<<endl;

    return 0;   
}

