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
    
    if (imc <= 18.5){
        cout << fixed;
        cout.precision(2);
        cout << nome << " seu IMC esta em: " << imc;
        cout << "\nGrau de OBESDADE 0, estado em MAGREZA";
    } 
    else if (imc > 18.5 and imc <= 24.9){
        cout << fixed;
        cout.precision(2);
        cout << nome << " seu IMC esta em: " << imc;
        cout << "\nGrau de OBESIDADE 0, estado em NORMAL";
    }
    else if (imc > 24.9 and imc <= 29.9){
        cout << fixed;
        cout.precision(2);
        cout << nome << " seu IMC esta em: " << imc;
        cout << "\nGrau de OBESIDADE 1, estado em SOBREPESO";   
    }
    else if ( imc > 29.9 and <= 39.9){
        cout << fixed;
        cout.precision(2);
        cout << nome << " seu IMC esta em: " << imc;
        cout << "\nGrau de OBESIDADE 2, estado em OBESIDADE";
    }
    else if ( imc > 39.9){
        cout << fixed;
        cout.precision(2);
        cout << nome << " seu IMC esta em: " << imc;
        cout << "\nGrau de OBESIDADE 3, estado em OBESIDADE GRAVE";
    }
    return 0;
}