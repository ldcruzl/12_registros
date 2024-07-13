//CRUZ LLICA, Luis David

#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

struct EMPLEADO{
    int sue;//variable para el sueldo
    string sex;//variable para el sexo
    string name;//variable para los nombres
};

int main(){
    int n, msue=0, mensue=0;
    system("cls");
    cout<<"Empresa DataTech"<<endl;
    cout<<"Ingrese el numero de empleados: ";cin>>n;
    EMPLEADO empleado[n];
    for(int i=0; i<n; i++){
        cout<<"Ingrese los datos del empleado #"<<i+1<<endl;
        cin.ignore();
        cout<<"Ingrese su nombre: ";getline(cin, empleado[i].name);
        cout<<"Ingrese su sexo: ";cin>>empleado[i].sex;
        cout<<"Ingrese su sueldo: ";cin>>empleado[i].sue;
    }
    for(int i=0; i<n; i++){
        if(empleado[i].sue<empleado[mensue].sue){
            mensue=i;
        }
        if(empleado[i].sue>empleado[msue].sue){
            msue=i;
        }
    }
    system("cls");
    cout<<"Empleado con el menor sueldo"<<endl;
    cout<<"Nombre: "<<empleado[mensue].name<<endl;
    cout<<"Sexo: "<<empleado[mensue].sex<<endl;
    cout<<"Sueldo: "<<empleado[mensue].sue<<endl;
    system("pause");
    cout<<"Empleado con el mayor sueldo"<<endl;
    cout<<"Nombre: "<<empleado[msue].name<<endl;
    cout<<"Sexo: "<<empleado[msue].sex<<endl;
    cout<<"Sueldo: "<<empleado[msue].sue<<endl;
    system("pause");
    return 0;
}