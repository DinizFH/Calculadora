#include <iostream>

using namespace std;

int factorial(int n){
    int total = 1;
    for(int i = 2; i <= n; i++){
        total *= i;
    }
    return total;
}
int main(){
    cout << factorial(3) << endl;
    cout << factorial(4) << endl;
    cout << factorial(5) << endl;
    cout << factorial(6) << endl;

    return 0;
}