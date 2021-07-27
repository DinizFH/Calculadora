#include <iostream>

using namespace std;

int main(){
    int arr[] = {50, 35, 25, 15, 87};
    int* p1 = &arr[0];

    cout << *p1 << endl;

    p1 = p1 + 2;
    cout << *p1 << endl;



    return 0;
}