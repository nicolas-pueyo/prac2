#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

cout << "Introduzca un angulo en grados, minutos y segundos: ";
unsigned grados, minutos, segundos;
cin >> grados >> minutos >> segundos;
if (grados < 0) {
    if(minutos < 0 || segundos < 0){
        cout << "Introduzca todos los datos con el mismo signo" << endl;

    }
    else {
        grados = -grados;
        minutos = -minutos;
        segundos = - segundos;

    }
}
grados = grados + (minutos + segundos/60)/60;
double radianes= grados * M_PI / 180;
if (sin(radianes) == -1 || sin(radianes) == 1) {
    cout << fixed << setprecision(3) << "El valor de los grados en radianes es: " << radianes << endl;
cout << "sen " << radianes << " = " << sin(radianes) << endl;
cout << "cos " << radianes << " = " << cos(radianes) << endl;
cout << "tangente no definida" << endl;
}else {
cout << fixed << setprecision(3) << "El valor de los grados en radianes es: " << radianes << endl;
cout << "sen " << radianes << " = " << sin(radianes) << endl;
cout << "cos " << radianes << " = " << cos(radianes) << endl;
cout << "tan " << radianes << " = " << tan(radianes) << endl;
}
system ("pause");
return 0;
}