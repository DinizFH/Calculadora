#include <iostream>

using namespace std;

int main(){
     int x = 7;
     int& xRef = x;

     cout << x << "\t" << &x << endl;
     cout << xRef << "\t" << &xRef << endl;

     string name;

     cout << "Qual seu nome: ";
        cin >> name;
    
    cout << name << "\t" << &name;


    return 0;
}