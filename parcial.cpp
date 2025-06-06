#include <iostream>
using namespace std;

//Ejercicio 1 While, do-while
int main(){

    int number, n;
    do {
        cout << "Por favor ingrese numeros enteros positivos." << endl;
        cin >> number;
    } while(number > 0);
   
    for(int i = 0; i < number; i++){
        cout << i << endl;
        cout << "Cantidad de numeros ingresados: " << endl;
    }

    

//Ejercicio 2
int altura; 
    cout << "Ingrese la altura que desea que tenga el triangulo." << endl;
    cin >> altura;
    for(int j = 1; j <= altura; j++){
        cout << j << endl;
    }

    //Extra 2
    int menuGlobal, carro;
    do{
        cout << "Menu de Opciones." << endl;
    cout << "1. ver productos disponibles." << endl;
    cout << "2. Agregar producto al carrito." << endl;
    cout << "3. Ver carrito de compras." << endl;
    cout << "4. Finalizar compra y salir." << endl;
    cin >> menuGlobal;
    switch(menuGlobal){
        case 1:
        cout << "Productos disponibles." << endl;
        cout << "1. Paginas ($0.25)." << endl;
        cout << "2. Caja de colores ($1.00)." << endl;
        cout << "3. pegamento. ($0.75)" << endl;
        break;
        case 2:
        cout << "Agregar producto." << endl;
        cout << "1. Paginas ($0.25)." << endl;
        cout << "2. Caja de colores ($1.00)." << endl;
        cout << "3. pegamento. ($0.75)" << endl;
        cin >> carro;
        break;
        case 3:
        cout << "Carro: " << carro << endl;;
        break;
        case 4:
        cout << "Gracias por su visita." << endl;
        break;
        default:
        cout << "invalid option" << endl;
        break;
    }

    } while (menuGlobal != 4);
    




    return 0;
}
