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
    cout<<"Ingrese la cantidad de personas: ";cin>>n;
    PERSONA persona[n];
    for(int i=0; i<n; i++){
        cout<<"Ingrese los datos de la persona #"<<i+1<<endl;
        cin.ignore();
        cout<<"Ingrese su nombre: ";getline(cin, persona[i].name);
        cout<<"Ingrese su numero de DNI: ";cin>>persona[i].dni;
        cout<<"Ingrese su edad: ";cin>>persona[i].edad;
    }
    return 0;
}