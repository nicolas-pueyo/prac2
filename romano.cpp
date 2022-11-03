#include <iostream>
using namespace std;

int main() {
bool si = true;
while (si == true) {
    cout << "Introduzca un numero del 1 al 10: ";
    unsigned num;
    cin >> num;


if (num >=1 && num <= 10) {
	if (num==1){
		cout << "1 = I" << endl;
		}
	else if (num==2){
		cout << "2 = II" << endl;
		}
	else if (num==3){
		cout << "3 = III" << endl;
		}
	else if (num==4){
		cout << "4 = IV" << endl;
		}
	else if (num==5){
		cout << "5 = V" << endl;
		}
	else if (num==6){
		cout << "6 = VI" << endl;
		}
	else if (num==7){
		cout << "7 = VII" << endl;
		}
	else if (num==8){
		cout << "8 = VIII" << endl;
		}
	else if (num==9){
		cout << "9 = IX" << endl;
		}
	else {
		cout << "10 = X" << endl;
		}
	si = false;
}
else {
	cout << "Introduzca un numero entre 1 y 10" << endl;
}
}

system("pause");
}
