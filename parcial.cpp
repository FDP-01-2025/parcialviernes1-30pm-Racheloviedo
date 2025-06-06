#include <iostream>
using namespace std;

//Ejercicio 1 While, do-while
int main(){

    int number, n;
    do {
        cout << "Por favor ingrese numeros enteros positivos." << endl;
        cin >> number;
    } while(number > 0);
    cout << "Cantidad de numeros ingresados: " << endl;
    for(int i = 0; i < number; i++){
        cout << i << endl;
    }

    

//Ejercicio 2
int altura; 
    cout << "Ingrese la altura que desea que tenga el triangulo." << endl;
    cin >> altura;
    for(int j = 0; j < altura; j++){
        cout << j << endl;

    }



    return 0;
}
