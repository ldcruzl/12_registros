//CRUZ LLICA, Luis David

#include<iostream>
using namespace std;

struct EMP{
    int numero;
    string nombre;
    float ventas[12];
    float salario;
};

int main(){
    EMP EMPLEADO[50];
    int n;
    cout<<"Ingrese la cantidad de empleados: ";cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Ingrese el numero del empleado: ";cin>>EMPLEADO[i].numero;
        cin.ignore();
        cout<<"Ingrese el nombre del empleado: ";getline(cin, EMPLEADO[i].nombre);
        for(int j=0; j<12; j++){
            cout<<"Ingrese la cantidad de ventas: ";cin>>EMPLEADO[i].ventas[j];
        }
        cout<<"Ingrese su salario: ";cin>>EMPLEADO[i].salario;
    }
    for(int i=0; i<n; i++){
        cout<<"EMPLEADO #"<<i+1<<endl;
    }
    return 0;
}