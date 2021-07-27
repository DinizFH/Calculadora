#include <iostream>
using namespace std;

int main() {
    double pi = 3.14;
    double& piRef = pi;

    // valor de pi e endereço de piRef
    cout << piRef << endl;
    cout << &piRef << endl;

    // alterando o valor de piRef
    double valor;
    cout << "Digite um valor double para piRef: ";
        cin >> valor;

    piRef = valor;
    // ao alterar o valor de piRef, quando efetuamos a busca do valor pela referencia, permanece o valor digitado pelo usuario
    cout << "Novo valor de de piRef: " << piRef << endl;
    cout << "endereco de piRef: " << &piRef << endl;
    cout << "valor contido no endereco de piRfe: " << *&piRef << endl;



    return 0;
}