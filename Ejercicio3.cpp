#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cadena = " ";
    int palabras = 0;
    cout << "Ingresa una cadena de texto." << endl;
 
    getline(cin, cadena);
 
    for (int i = 0; i < cadena.length(); i++) {
        if ((cadena[i] == ' ' && cadena[i + 1] != ' ')) {
            palabras = palabras + 1;
        }
    }
    if (palabras<1){
    cout << "Hay " << palabras+1 << " palabra " << endl;
    }
    else{
    cout << "Hay " << palabras+1 << " palabras " << endl;
    }
}