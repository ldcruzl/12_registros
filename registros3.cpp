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
    int mes;
    cout<<"---------Personas que nacieron en el mismo mes---------"<<endl;
    do{
        cout<<"Ingrese un mes a buscar: ";cin>>mes;
        if(mes!=0){
            int c=0;
            for(int i=0; i<n; i++){
                if(persona[i].mes==mes){
                    cout<<"Nombre: "<<persona[i].name<<endl;
                    cout<<"Dia de nacimiento: "<<persona[i].dia<<endl;
                    cout<<"Mes de nacimiento: "<<persona[i].mes<<endl;
                    cout<<"Anio de nacimiento: "<<persona[i].year<<endl;
                    c++;
                }
            }
            if(c==0){
                cout<<"No hay coincidencias, pruebe otro mes"<<endl;
            }
        }
    }while(mes!=0);
    return 0;
}