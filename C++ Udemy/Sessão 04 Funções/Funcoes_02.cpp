#include <iostream>

using namespace std;

void log (int number, bool newLine); //Function prototype


int main(){
    log(3, false);
    log(4, false);
    log(5, false);

    return 0;
}

void log (int number, bool newLine){
    cout << "Number: " << number;
    newLine ? cout << endl : cout << " ";

}