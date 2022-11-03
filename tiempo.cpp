#include <iostream>
using namespace std;

int main() {

cout << "Introduzca una cantidad de tiempo en segundos: ";
unsigned segundos;
cin >> segundos;

if (segundos > 0) {
unsigned dias = segundos / 86400;
segundos = segundos - dias*86400;

unsigned horas = segundos/3600;
segundos = segundos - horas*3600;

unsigned minutos = segundos / 60;
segundos = segundos - minutos*60;

cout << "Los segundos introducidos equivalen a " << dias << " dias, " << horas << " horas, " << minutos << " minutos y " << segundos << " segundos" << endl;
}
else {
    cout << "Introduzca una cantidad positiva de tiempo." << endl;
}

}