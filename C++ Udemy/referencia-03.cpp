#include <iostream>
using namespace std;

int main(){
    string greenting = "Hello";
    string& ref = greenting;


    string name;
    cout << "Qual o seu nome: " << endl;
        cin >> name;

    // mudamos o valor da variavel ref.    
    ref = name;


    cout << ref << "  segue abaixo os enderecos de memoria:\n";
    // observe que mesmo alterando o valor da variavel ref, o seu endereço permanece o mesmo
    cout << &greenting << "\t" << &ref << "\t" << &name;


    return 0;
}