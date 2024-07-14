//CRUZ LLICA, Luis David

#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

struct PERSONA{
    string name;
    string dni;
    int edad;
};
int main(){
    int n, s=0;
    system("cls");
    cout<<"------ESTRUCTURA PERSONA------"<<endl;
    cout<<"Ingrese la cantidad de personas: ";cin>>n;
    PERSONA persona[n];
    for(int i=0; i<n; i++){
        cout<<"Ingrese los datos de la persona #"<<i+1<<endl;
        cin.ignore();
        cout<<"Ingrese el nombre: ";getline(cin, persona[i].name);
        cout<<"Ingrese el numero de DNI: ";cin>>persona[i].dni;
        cout<<"Ingrese la edad: ";cin>>persona[i].edad;
        s=s+persona[i].edad;
    }
    int m=0;
    for(int i=0; i<n; i++){
        if(persona[i].edad>=50){
            m++;
        }
    }
    double prom=s/(double)n;
    system("cls");
    cout<<"Las personas mayores a 50: "<<m<<endl;
    system("pause");
    cout<<"El promedio de edades es: "<<prom<<endl;
    system("pause");
    cout<<"---------Datos ingresados---------"<<endl;
    for(int i=0; i<n; i++){
        cout<<"Persona #"<<i+1<<endl;
        cout<<"Nombre: "<<persona[i].name<<endl;
        cout<<"DNI: "<<persona[i].dni<<endl;
        cout<<"Edad: "<<persona[i].edad<<endl;
    }
    return 0;
}