#include <iostream>
#include <tchar.h>
using namespace std;

int main() 
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int a11, a12, a13, a14;
	int a21, a22, a23, a24;
	int a31, a32, a33, a34;
	int a41, a42, a43, a44;

	int casa1, casa2, casa3;
	int casa4, casa5, casa6;
	int casa7, casa8, casa9;

	int opcao;

	int detA;

	cout << "Determinante de matrizes (Chió Method)" << endl;

	cout << "<LINHA 1>" << endl;
	cout << "Digite os respectivos valores de cada casa da linha" << endl;
	cout << "A11: ";
	cin >> a11;
	cout << "A12: ";
	cin >> a12;
	cout << "A13: ";
	cin >> a13;
	cout << "A14: ";
	cin >> a14;

	cout << "<LINHA 2>" << endl;
	cout << "Digite os respectivos valores de cada casa da linha" << endl;
	cout << "A21: ";
	cin >> a21;
	cout << "A22: ";
	cin >> a22;
	cout << "A23: ";
	cin >> a23;
	cout << "A24: ";
	cin >> a24;

	cout << "<LINHA 3>" << endl;
	cout << "Digite os respectivos valores de cada casa da linha" << endl;
	cout << "A31: ";
	cin >> a31;
	cout << "A32: ";
	cin >> a32;
	cout << "A33: ";
	cin >> a33;
	cout << "A34: ";
	cin >> a34;

	cout << "<LINHA 4>" << endl;
	cout << "Digite os respectivos valores de cada casa da linha" << endl;
	cout << "A41: ";
	cin >> a41;
	cout << "A42: ";
	cin >> a42;
	cout << "A43: ";
	cin >> a43;
	cout << "A44: ";
	cin >> a44;

	if (a11 != 1) 
	{
		cout << "Não será possível resolver (por enquanto), pois a11 é diferente de 1" << endl;
		system("PAUSE");
			return 0;
	}
	else

	cout << " " << endl;
	cout << "A sua matriz:" << endl;

	printf("[%d ", a11);
	printf("%d ", a12);
	printf("%d ", a13);
	printf("%d] \n", a14);

	printf("[%d ", a21);
	printf("%d ", a22);
	printf("%d ", a23);
	printf("%d] \n", a24);

	printf("[%d ", a31);
	printf("%d ", a32);
	printf("%d ", a33);
	printf("%d] \n", a34);

	printf("[%d ", a41);
	printf("%d ", a42);
	printf("%d ", a43);
	printf("%d] \n", a44);

	casa1 = a22 - a12 * a21;
	casa2 = a23 - a13 * a21;
	casa3 = a24 - a14 * a21;

	casa4 = a32 - a31 * a12;
	casa5 = a33 - a31 * a13;
	casa6 = a34 - a31 * a14;

	casa7 = a42 - a12 * a41;
	casa8 = a43 - a41 * a13;
	casa9 = a44 - a41 * a14;

	cout << " " << endl;
	cout << "Matriz após Chió: " << endl;

	printf("[%d ", casa1);
	printf("%d ", casa2);
	printf("%d] \n", casa3);

	printf("[%d ", casa4);
	printf("%d ", casa5);
	printf("%d] \n", casa6);

	printf("[%d ", casa7);
	printf("%d ", casa8);
	printf("%d] \n", casa9);

	cout << " " << endl;
	cout << "Deseja concluir com o método de Sarrus?" << endl;
	cout << ">1 PARA SIM, 0 PARA NÃO<" << endl;
	cout << ">";
	cin >> opcao;
	cout << " " << endl;

	if (opcao == 1) 
	{
		detA = casa1 * casa5 * casa9 + casa2 * casa6 * casa7 + casa3 * casa4 * casa8 - casa3 * casa2 * casa7 - casa1 * casa6 * casa8 - casa2 * casa4 * casa9;

		cout << "O valor de Determinante de A equivale a: " << detA << endl;
		system("PAUSE");
		return 0;
	}
	if (opcao == 0) 
	{
	cout << "Tudo bem, fique com a matriz final: " << endl;

	printf("[%d ", casa1);
	printf("%d ", casa2);
	printf("%d] \n", casa3);

	printf("[%d ", casa4);
	printf("%d ", casa5);
	printf("%d] \n", casa6);

	printf("[%d ", casa7);
	printf("%d ", casa8);
	printf("%d] \n", casa9);

	system("PAUSE");
	return 0;
	}

	system("PAUSE");
		return 0;


}