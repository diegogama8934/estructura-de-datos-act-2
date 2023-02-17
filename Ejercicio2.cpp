#include <iostream>

using namespace std;

int main(){
    cout << "Bienvenido. Ingresa el numero de datos que deseas agregar:\n";
    int N;
    cin >> N;

    int Lista [N];

    for (int i = 0; i < N; i++) // For para ingresar los datos
    {
        cout << "Ingresa el dato " << (i+1) << "\n";
        cin >> Lista[i];
    }

    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < (N-i); j++)
        {
            if (Lista[j] > Lista[j+1])
            {
                int aux = Lista[j];
                Lista[j] = Lista[j+1];
                Lista[j+1] = aux;
            }   
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << Lista[i] << " ";
    }
}