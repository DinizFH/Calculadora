#include <iostream>

using namespace std;

//função chamada max
int max(int n1, int n2){
    return n1 >= n2 ? n1 : n2;

}

int main(){
    int a, b, c;

    cout << "Enter thr first number: ";
        cin >> a;
    cout << "Enter the secund number: ";
        cin >> b;
    cout << "nter the third number: ";
        cin >> c;

    cout << "Maximo: " << max(a, max(b, c));

    return 0;
}