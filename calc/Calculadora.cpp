#include <iostream>
#include <cstdio>
#include <windows.h>


using namespace std;

void time (){
    Sleep(2000);
}

int main(){

    int number, number2, result;
    int opc;
    char resp;

    while (opc != 0){
        cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
        cout << "BEM VINDO A CALCULADORA C++" << endl;
        cout << "=-=-==-==-=-=-=-=-=-=-=-=-=-=" << endl;
        cout << "Carregando aguarde...\n";
        time();
        cout << "=-=-=-=-=-=-=-=-=-=-=\n";
        cout << "\nOPCOES PARA CALCULO\n";
        cout << "=-=-=-=-=-=-=-=-=-=-=\n";
        cout << "1 - SOMAR\n";
        cout << "2 - SUBTRAIR\n";
        cout << "3 - DIVIDIR\n";
        cout << "4 - MULTIPLICAR\n";
        cout << "0 - SAIR\n";
        cout << "=-=-=-=-=-=-=-=-=-=-=\n";
        cout << "Escolha uma opcao: ";
            cin >> opc;

        if (opc != 0){
            cout << "=-=-=-=-=-=-=-=-=-=-=\n";
            cout << "Digite o primeiro valor inteiro : ";
                cin >> number;
            cout << "Digite o segundo valor inteiro: ";
                cin >> number2;

                switch(opc){
                    case 1:
                        cout << "=-=-=-=-=-=-=-=-=-=-=\n";
                        cout << "CALCULANDO...\n";
                        cout << "=-=-=-=-=-=-=-=-=-=-=\n\n";
                        time();
                        result = number + number2;
                        cout << "O resultado da SOMA dos valores " << number << " e " << number2 << " is igual a: " << result << endl;
                        break;
                    case 2:
                        cout << "=-=-=-=-=-=-=-=-=-=-=\n";
                        cout << "CALCULANDO...\n";
                        cout << "=-=-=-=-=-=-=-=-=-=-=\n\n";
                        time();
                        result = number - number2;
                        cout << "O resultado da SUBTRACAO dos valores " << number << " e " << number2 << " is igual a: " << result << endl;
                        break;
                    case 3:
                        cout << "=-=-=-=-=-=-=-=-=-=-=\n";
                        cout << "CALCULANDO...\n";
                        cout << "=-=-=-=-=-=-=-=-=-=-=\n\n";
                        time();
                        result = number / number2;
                        cout << "O resultado da DIVISAO dos valores " << number << " e " << number2 << " is igual a: " << result <<endl;
                        break;
                    case 4:
                        cout << "=-=-=-=-=-=-=-=-=-=-=\n";
                        cout << "CALCULANDO...\n";
                        cout << "=-=-=-=-=-=-=-=-=-=-=\n\n";
                        time();
                        result = number * number2;
                        cout << "O resultado da DIVISAO dos valores " << number << " e " << number2 << " is igual a: " << result << endl;
                        break;
                }
            }else{
                cout << "\nObrigado por usar nossa calculadora!\n\n";
            }          
        }

    return 0;
}