#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int fecha;
    bool si = true;

// bool si tiene el mismo funcionamiento que el descrito en cambio-moneda.cpp


while(si == true) {
    cout << "Introduzca una fecha [aaaammdd]: ";
    cin >> fecha;
    if (fecha >0) {
    cout << setfill('0') << right
    << "La fecha es: " 
    << setw(2) << fecha%100
    << "/" 
    << setw(2) << ((fecha%10000)-(fecha%100))/100
    << "/" 
    << setw(4) << fecha/10000
    << endl;
    si == false;
    return 0;
    }
    else {
    cout <<"Intruduzca una fecha positiva" << endl;
    
}
}
}