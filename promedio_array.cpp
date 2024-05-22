#include <iostream>
using namespace std;
int main (){
float notas[6], suma, promedio;
for (int i= 0; i <6; i++)
{
    cout << "Introduzca la nota: \n";
    cin>>notas[i];
    suma=suma+notas[i];
}
promedio=suma/6;
cout <<"Su promedio es de: "<<promedio<<"\n";

    return 0;
}