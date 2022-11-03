#include <iostream>
#include <iomanip>
using namespace std;

int main() {

double euros;
const double pesetas_euro = 166.386;

bool si = true;

/*si es una variable booleana que determina cuántas
 *veces se ejecutará el bucle, ya que cambia a false cuando se ejecuta
 *con normalidad y se queda como está cuando no se introduce una
 *cantidad válida */

while (si == true) {
    cout << "Introduzca una cantidad de dinero no negativa en euros: ";
    cin >> euros;
    double pesetas = euros * pesetas_euro;
    double centimos = euros * 100;
    if(euros > 0) {
    cout << fixed << setprecision(0) 
         << "Son " << int(euros) << " euros con " << int(centimos)%100 << " centimos y equvalen a: " << pesetas << " pesetas" << endl;
         si = false;
    }
    else {
    cout << "Introduzca una cantidad positiva" << endl;
    }
}
system("pause");
return 0;
}