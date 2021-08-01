#include <iostream>

using namespace std;

void log (string texto){
    if (!texto.empty()){
            return;
    }
    cout << "Texto: " << texto << endl;
}


int main(){
    log("");
    log("OK");


    return 0;
}