#include <iostream>

using namespace std;

int main(){
    int valor = 1993;
    int& vRef = valor;
    int* pont = &valor;

    cout << valor << "\t" << &vRef << "\t" << pont << endl;
     

    return 0;
}