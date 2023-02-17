#include <iostream>

using namespace std;

int main (){
    int numeros[6] = {2,5,3,7,9,1};
    int mayor, menor;
    for (int i = 0; i < 6; i++)
    {
        if (numeros[i]>numeros[i+1])
        {
            mayor = numeros[i];
        }
        if (numeros[i] < numeros[i+1])
        {
            menor = numeros[i];
        }
    }
    cout << "El numero mas grande es: " << mayor << "\nEl numero mas chico es: " << menor;
}