#include <iostream>

using namespace std;

void func3(){
    cout << "Hello.exe";
}

void func2(){ //Função 02 chama a função 03
    func3();
}

void func1(){ //Função 01 chama a função 02
    func2();
}

int main(){
    func1(); //Obedecendo a cadeia de execução,, ao chamar a função 01, a mesma exibira o que há na função 03

    return 0;
}