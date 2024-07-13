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
    int n;
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
    }
    int m=0;
    for(int i=0; i<n; i++){
        if(persona[i].edad>=50){
            m++;
        }
    }
    system("cls");
    cout<<"Las personas mayores a 50: "<<m<<endl;
    return 0;
}