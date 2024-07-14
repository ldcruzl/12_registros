//CRUZ LLICA, Luis David

#include<iostream>
#include<string>
using namespace std;

struct DATA{
    string name;
    string pais;
    string disciplina;
    int medallas;
};

int main(){
    int n;
    cout<<"--------Gestion de atletas--------"<<endl;
    cout<<"Ingrese el numero de atletas";cin>>n;
    DATA at[n];
    for(int i=0; i<n; i++){
        cout<<"Ingrese lo solicitado para el atleta #"<<i+1<<endl;
        cin.ignore();
        cout<<"Ingrese el nombre: ";getline(cin, at[i].name);
        cout<<"Ingrese el pais de procedencia: ";getline(cin, at[i].pais);
        cout<<"Ingrese la disciplina: ";getline(cin, at[i].disciplina);
        cout<<"Ingrese la cantidad de medallas: ";cin>>at[i].medallas;
    }
    return 0;
}