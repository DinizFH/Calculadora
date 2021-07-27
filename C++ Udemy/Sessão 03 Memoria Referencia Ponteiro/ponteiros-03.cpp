#include <iostream>

using namespace std;

int main(){
    int arr[] = {50, 35, 25, 15, 87};
    int* p1 = &arr[0];

    cout << *p1 << endl;
// ao mudar o endereço do ponteiro o valor muda conforme estabelecido no ARRAWAY
    p1 = p1 + 2;
    cout << *p1 << endl;
// declarado uma variavel X que a mesma recebe um valor
    int x = 123;
    int* p2 = &x;
// observa-se que o endereço e o valor se mantem
    cout << p2 << endl;
    cout << *p2 << endl;
    cout << &x << endl;
//Declarado uma váriavel nova para receber um valor digitado pelo User para alterar o valor de X
    int valor;
    cout << "digite um novo valor para X: ";
        cin >> valor;
//Usamos o ponteiro para acessar o endereço de memomria e alterar o valor do mesmo
    *p2 = valor;
//obseve-se que o valor digitado pelo User agora é o valor de X
    cout << *p2 << "\t" << x;



    return 0;
}