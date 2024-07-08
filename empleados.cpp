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
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>EMPLEADO[i].numero;
        cin>>EMPLEADO[i].nombre;
        for(int j=0; j<12; j++){
            cin>>EMPLEADO[i].ventas[j];
        }
        cin>>EMPLEADO[i].salario;
    }
    return 0;
}