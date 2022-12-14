// Acha raiz mais proxima a um chute inicial pelo m?todo de Newton-Raphson
// Prof. Luciano Daniel (UFF)

#include <iostream>
#include <iomanip>
using namespace std;
#include "nr.h"

double calc_rz(double x0, float tol, int iter_max);

int main(int argc, char** argv)
{
	double x_0;
	bool flag;
	float tol;
	int iter_max = 100;
	int aux1;
	nr P;
	cout << "Inic:";
	cin >> x_0;
	cout << "Tol:";
	cin >> tol;
	aux1 = P.calc_rz(x_0, tol, iter_max);
	cout << endl << "Result:" << endl;
	switch(aux1)
	{
		case 0:
			cout<<"Nao-convergente";
			break;
		case 1:
			cout << "iter_cont: " << P.iter << endl;
			cout << setprecision(40);
			cout << "Raiz: " << P.x_1 << endl;
			cout << setprecision(10);
			cout << "err: " << P.err << endl;
			break;
	}
	system("pause");
	return 0;
}