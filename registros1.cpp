//CRUZ LLICA, Luis David

#include<iostream>
#include<string>
using namespace std;

struct EMP{
    int sue;//variable para el sueldo
    string sex;//variable para el sexo
    string name;//variable para los nombres
};

int main(){
    int n;
    cout<<"Ingrese el numero de empleados: ";cin>>n;
    EMP empleado[n];
    for(int i=0; i<n; i++){
        cout<<"Ingrese los datos del empleado #"<<i+1<<endl;
        cin.ignore();
        cout<<"Ingrese su nombre: ";getline(cin, empleado[i].name);
        cout<<"Ingrese su sexo: ";cin>>empleado[i].sex;
        cout<<"Ingrese su sueldo: ";cin>>empleado[i].sue;
    }
    return 0;
}