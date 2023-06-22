#include <iostream>
#include <tchar.h>
using namespace std;

int main() {
    _tsetlocale(LC_ALL, _T("portuguese"));
    int a11, a12, a13, a21, a22, a23, a31, a32, a33, detA;
    cout << "<Calculadora de Determinates (Sarrus Edition)>" << endl;

    cout << "<LINHA 1>" << endl;
    cout << "Digite os valores, respectivamente: " << endl;
    cout << "A11: ";
    cin >> a11;
    cout << "A12: ";
    cin >> a12;
    cout << "A13: ";
    cin >> a13;

    cout << "<LINHA 2>" << endl;
    cout << "Digite os valores, respectivamente: " << endl;
    cout << "A21: ";
    cin >> a21;
    cout << "A22: ";
    cin >> a22;
    cout << "A23: ";
    cin >> a23;

    cout << "<LINHA 3>" << endl;
    cout << "Digite os valores, respectivamente: " << endl;
    cout << "A31: ";
    cin >> a31;
    cout << "A32: ";
    cin >> a32;
    cout << "A33: ";
    cin >> a33;
    cout << " " << endl;

    cout << "Esta é a sua matriz descrita: " << endl;

    cout << " " << endl;

    printf("[%d ", a11);
    printf(" %d ", a12);
    printf(" %d] \n", a13);

    printf("[%d ", a21);
    printf(" %d ", a22);
    printf(" %d] \n", a23);

    printf("[%d ", a31);
    printf(" %d ", a32);
    printf(" %d] \n", a33);

    cout << " " << endl;

    detA = a11 * a22 * a33 + a12 * a23 * a31 + a13 * a21 * a32 - a13 * a22 * a31 - a11 * a23 * a32 - a12 * a21 * a33;

    cout << "O valor de Determinante de A equivale a: " << detA << endl;

    system("PAUSE");
    return 0;
}
