#include <iostream>

using namespace std;

int main() {
    int a = 2;
    int b = a; // atribuimos o valor por copia
    int c;

    a++;
    b++;

    cout << a << "" << b;

    return 0;
}