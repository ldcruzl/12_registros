//CRUZ LLICA, Luis David

#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

struct DATA{
    string name;
    string pais;
    string disciplina;
    int medallas;
};

int main(){
    int n;
    system("cls");
    cout<<"--------Gestion de atletas--------"<<endl;
    cout<<"Ingrese el numero de atletas: ";cin>>n;
    DATA at[n];
    for(int i=0; i<n; i++){
        cout<<"Ingrese lo solicitado para el atleta #"<<i+1<<endl;
        cin.ignore();
        cout<<"Ingrese el nombre: ";getline(cin, at[i].name);
        cout<<"Ingrese el pais de procedencia: ";getline(cin, at[i].pais);
        cout<<"Ingrese la disciplina: ";getline(cin, at[i].disciplina);
        cout<<"Ingrese la cantidad de medallas: ";cin>>at[i].medallas;
    }
    system("cls");
    string pais;
    cout<<"-------Busqueda por pais-------"<<endl;
    cin.ignore();
    cout<<"Ingrese un pais a buscar: ";getline(cin, pais);
    int c=0;
    int maxmed=-1, med=-1;
    for(int i=0; i<n; i++){
        if(at[i].pais==pais){
            cout<<"Atleta #"<<i+1<<endl;
            cout<<"Nombre: "<<at[i].name<<endl;
            cout<<"Disciplina: "<<at[i].disciplina<<endl;
            cout<<"Cantidad de medallas: "<<at[i].medallas<<endl;
            c++;
            if(at[i].medallas>maxmed){
                maxmed=at[i].medallas;
                med=i;
            }
        }
    }
    if(c==0){
        cout<<"No hay coincidencias"<<endl;
    }
    else if(med!=-1){
        cout<<"-------Mayor cantidad de medallas-------"<<endl;
        cout<<"El atleta del pais de "<<pais<<" con mas medallas es: "<<endl;
        cout<<"Nombre: "<<at[med].name<<endl;
        cout<<"Disciplina: "<<at[med].disciplina<<endl;
        cout<<"Cantidad de medallas: "<<at[med].medallas<<endl;
        system("pause");
    }
    return 0;
}