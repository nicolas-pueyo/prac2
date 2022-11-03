#include <iostream>
#include <iomanip>
using namespace std;

int main() {
const int ANCHO = 8;
bool si = true;
while(si == true) {
cout << "Introduzca una cantidad de dinero[Numero natural y multiplo de 10]: ";


int dinero;
cin >> dinero;

if (dinero >= 10 && dinero%10 == 0 && dinero <= 600) {

int i= 0;
while(dinero >= 50) {
    dinero = dinero - 50;
    i++;
}
int j=0;
while(dinero >= 20) {
    dinero = dinero - 20;
    j++;
}
int k=0;
while(dinero >= 10) {
    dinero = dinero -10;
    k++;
}

    cout << setw(ANCHO) << "Billetes" << setw(ANCHO) << "Euros" << endl;
    cout << setw(ANCHO) << "========"  << setw(ANCHO) << "======" << endl;
    cout << setw(ANCHO) << k  << setw(ANCHO) << "10" << endl;
    cout << setw(ANCHO) << j  << setw(ANCHO) << "20" << endl;
    cout << setw(ANCHO) << i  << setw(ANCHO) << "50" << endl;
si = false;

}
else if(dinero < 0) {

    cout << "Introduzca una cantidad de dinero positiva" << endl; 

}
else if (dinero < 10) {
    cout << "Introduzca una cantidad de dinero mayor que 10" << endl;
}
else if (dinero > 600) {
    cout << "Introduzca una cantidad de dinero menor que 600" << endl;
}
else {
    cout << "Introduzca una cantidad de dinero divisible por 10" << endl;
}
}
system("pause");
}