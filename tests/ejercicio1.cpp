/*
Promedio de 3 notas, validacion de 0 a 10
Autor: Joseph
Fecha: 16/10/26

Enunciado: Sistema recibe 3 notas y muestra promedio.
Regla: notas en rango de 0 a 10
        Si una nota fuera de rango: datos invalidos

E: nota1,nota2,nota3,prom
P: Validar rango, calcular promedio 
S: Mostrar promedio

*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int precios[6];
    int i,buscado;
    bool encontrado = false;

    for (i=0;i<=6;i++){
        cout << "Ingrese el precio "<<i+1<<": "<<endl;
        cin >> precios[i];
    }
    cout << "Ingrese el precio a buscar: ";
    cin >> buscado;

    for (i=0;i<=6;i++){
        if (buscado == precios[i] && encontrado == false){
        cout << "Precio encontrado en la posicion: "<<i+1;
        }
    }

return 0;
}