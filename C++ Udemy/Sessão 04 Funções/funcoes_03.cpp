#include <iostream>

using namespace std;

//função chamada max
int max(int n1, int n2, int n3){
   //return n1 >= n2 ? n1 : n2;
   int maior;
   if(n1 > n2 && n1 > n3){
       maior = n1;
   }
    else if (n2 > n1 && n2 > n3){
        maior = n2;       
   }
   else{
       maior = n3;
   }
   return maior;

}

int main(){
    int a, b, c;

    cout << "Enter thr first number: ";
        cin >> a;
    cout << "Enter the secund number: ";
        cin >> b;
    cout << "nter the third number: ";
        cin >> c;

    cout << "Maximo: " << max(a, b, c);

    return 0;
}