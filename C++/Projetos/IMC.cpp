#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    string nome;
    int idade;
    char sexo;
    double peso, altura, imc;

    cout << "=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=\n";
    cout << "IMC - Indice de massa corporal\n";
    cout << "=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=\n";
    cout << "=-=-=-= CALCULADORA DE IMC =-=-=-=\n";
    cout << "=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=\n";
    
    cout << "Informe o nome do paciente: ";
        cin >> nome;
    cout << "Idade do paciente: ";
        cin >> idade;
    cout << "Sexo do paciente M/F: ";
        cin >> sexo;
    cout << "Altura do paciente: ";
        cin >> altura;
    cout << "Peso do paciente: ";
        cin >> peso;
    
    imc = peso / (altura * altura);
    
    return 0;
}