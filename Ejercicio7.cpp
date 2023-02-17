#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    cout << "Adivina el numero entre 0 y 100\n";
    int numero = rand() % 101;
    int intento;
    do{
        cin >> intento;
        if (intento > numero)
        {
            cout << "El numero que buscas es menor que " << intento << "\n";
        }
        if (intento < numero)
        {
            cout << "El numero que buscas es mayor que " << intento << "\n";
        }
    } while (intento != numero);
    cout << "Felicidades, encontraste el numero.";
}