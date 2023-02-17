#include <iostream>

using namespace std;

int main (){
    cout << "Bienvenido al programa para calcular el area y perimetro de un rectangulo \n";
    
    cout << "Ingresa la base del rectangulo.\n";
    double base;
    cin >> base;
    
    cout << "Ingresa la altura del rectangulo.\n";
    double altura;
    cin >> altura;

    double area = base * altura;
    double perimetro = (2*base)+(2*altura);

    cout << "El area del rectangulo es: " << area << " unidades cuadradas.\nEl perimetro del rectangulo es: " << perimetro << " unidades.\n";
}