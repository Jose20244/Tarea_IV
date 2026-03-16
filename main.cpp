#include <iostream>
#include <string>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {

    string nombre;

    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    Nodo* head = NULL;
    Nodo* actual = NULL;
    int valor;
    char opcion = 's';

    while(opcion == 's') {

        cout << "Ingrese un numero: ";
        cin >> valor;

        Nodo* nuevo = new Nodo;
        nuevo->dato = valor;
        nuevo->siguiente = NULL;

        if(head == NULL){
            head = nuevo;
        } else {
            actual->siguiente = nuevo;
        }

        actual = nuevo;

        cout << "Desea ingresar otro numero? (s/n): ";
        cin >> opcion;
    }

    cout << endl;
    cout << "Lista generada:" << endl;

    Nodo* temp = head;

    int contador = 0;
    int suma = 0;

    while(temp != NULL){
        cout << temp->dato << " -> ";
        suma += temp->dato;
        contador++;
        temp = temp->siguiente;
    }

    cout << "NULL" << endl;

    double promedio = 0;
    if(contador > 0){
        promedio = (double)suma / contador;
    }

    cout << endl;
    cout << "Cantidad de nodos: " << contador << endl;
    cout << "Suma de valores: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    cout << endl;
    cout << "Nombre del usuario: " << nombre << endl;

    return 0;
}