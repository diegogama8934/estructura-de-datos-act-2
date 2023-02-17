#include <iostream>
 
using namespace std;

int main() {
    double suma = 0;
    double promedio = 0;

    cout << "Escribe el numero de alumnos a calificar:";
    int alumnos;
    cin >> alumnos;

    cout << "\nEscribe el numero de calificaciones:";
    int calificaciones;
    cin >> calificaciones;

    double notas[alumnos][calificaciones];

    for (int i = 0; i < alumnos; i++)
    {
        cout << "\nIngresa las calificaciones del alumno " << (i+1);
        for (int j = 0; j < calificaciones; j++)
        {
            cout << "\nIngresa la calificacion de la materia " << (j+1) << ": ";
            cin >> notas[i][j];
        }
    }
    for (int i = 0; i < alumnos; i++)
    {
        suma = 0;
        promedio = 0;
        for (int j = 0; j < calificaciones; j++)
        {
            suma+=notas[i][j];
            promedio=suma/calificaciones;
        }
        cout << "El promedio del alumno " << i << " es: " << promedio << "\n";
    }
}