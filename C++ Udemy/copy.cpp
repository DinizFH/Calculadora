#include <iostream>

using namespace std;

int main() {
    int a = 2;
    int b = a; // atribuimos o valor por copia

    a++;
    b--;

    cout <<"A: "<< a << "\n" <<"B: "<< b;

    return 0;
}