#include <iostream>
using namespace std;
int main (){
int numeros[100], suma=0;
for (int i=0; i <=100; i++)
{
    numeros[i]=i;
    suma=suma+numeros[i];
}
cout <<"La suma del 1 al 100 es: "<<suma<<"\n";

    return 0;
}