#include <iostream>
#include <string>
using namespace std;

int main() {
    float ancho;
    float alto;
    float area;
    float perimetro;
    cout << " Ingrese un ancho " << endl;
    cin >> ancho;
    cout << " ingrese un alto " << endl;
    cin >> alto;
    area = ancho * alto;
    perimetro = alto * 2 + ancho * 2;
    cout << " El area y el perimetro de un rectangulo " " equivalen a: " << ancho * alto << " y " << alto * 2 + ancho * 2 << endl;
}