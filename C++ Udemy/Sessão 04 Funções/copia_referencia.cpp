#include <iostream>

using namespace std;
//copia
void inc(int valor){
    valor++;
}
// Referencia
void incRef(int& valor){
    valor++;
}


int main(){
    int x = 1;

    inc(x);
    cout << x << endl;

    incRef(x);
    cout << x <<endl;

    return 0;
}