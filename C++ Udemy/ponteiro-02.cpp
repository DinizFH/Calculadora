#include <iostream>

using namespace std;
int main(){
    int* p1;
    int* p2 = nullptr;

    int x = 10;
    int y = 20;

    p1 = &x;

    cout << *p1;

    return 0;
}