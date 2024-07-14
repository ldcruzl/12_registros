//CRUZ LLICA, Luis David

#include<iostream>
#include<string>
using namespace std;

struct data{
    string name;
    int dia;
    int mes;
    int year;
};

int main(){
    int n;
    cout<<"Ingrese la cantidad de personas: ";cin>>n;
    data persona[n];
    for(int i=0; i<n; i++){
        cout<<"Ingrese los datos solicitados de la persona #"<<i+1<<endl;
        cin.ignore();
        cout<<"Ingrese el nombre: ";getline(cin, persona[i].name);
        cout<<"Ingrese dia de nacimiento: ";cin>>persona[i].dia;
        cout<<"Ingrese numero del mes de nacimiento: ";cin>>persona[i].mes;
        cout<<"Ingrese el anio de nacimiento: ";cin>>persona[i].year;
    }
    return 0;
}