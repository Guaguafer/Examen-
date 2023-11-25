
#include <iostream>
using namespace std;
float numero;
int main() 
{

    cout << "Ingresa un número: ";
    if (cin >> numero) {
        if ( numero > 0) {
            cout << "El número es positivo." <<endl;
        } else if ( numero < 0) {
            cout << "El número es negativo." <<endl;
        } else {
            cout << "El número es cero." <<endl;
        }
    } else {
 cout << "Error: Ingresa un valor numérico válido." <<endl;
    }

    return 0;
}
