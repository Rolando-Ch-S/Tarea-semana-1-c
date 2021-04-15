/* 3. Convertir los grados centígrados ingresados por un usuario a grados Fahrenheit y mostrar el
resultado en pantalla. 
 */
#include <iostream>
using namespace std;

int main() {
 float n1, Fahr;
    cout << "Convertir los grados centígrados a grados Fahrenheit: \n\n";//función del Prográma
    cout << "\nDigite los grados centígrados: ºC ";
    cin >> n1 ;
    Fahr = n1 * 1.8 + 32 ;   //formula del cambio
    cout << "El equivalente en grados Fahrenheit es: " <<"ºF " <<Fahr;
    return 0;
}