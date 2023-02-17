#include <iostream>

using namespace std;

int main (){
cout << "Escribe el numero del tamaño de la matriz cuadrada\n";
    int n;
    cin >> n;
    int suma = 0;
    int matriz [n][n];

    cout << n;

    for (int i = 0; i < n; i++) //Llenando los datos de la matriz
    {
        cout << "Llenando los datos del renglon " << (i+1) <<".\n";
        for (int j = 0; j < n; j++)
        {
            cout << "Escriba el dato " << (j+1) << " del renglon " << (i+1) << ".\n";
            cin >> matriz[i][j];
        }
        cout << "\n";
    }
    
    for (int i = 0; i < n; i++) //Sumando los datos de la diagonal principal
    {
        suma += matriz[i][i];
    }

    cout << "La suma de la diagonal principal es: " << suma;
}