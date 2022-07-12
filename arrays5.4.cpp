#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;     //n - степень Р(х)
	cout << "Степень многочлена = ";
	cin >> n;

	int* p = new int[n + 1]; //1 массив для коэф. Р 


	for (int i = n; i >= 0; i--, cout << endl) {
		cout << "p[" << i << "] = ";
		cin >> p[i];
	}

	int* k = new int[n + 1]; //2 массив для коэф. произв 

	k[n] = 0;
	for (int i = (n - 1); i >= 0; i--, cout << endl) {
		k[i] = p[i + 1] * (1 + i);

	}

	for (int i = n; i >= 0; i--) {
		cout << "  " << p[i] + k[i] << "*x ^" << i << endl;
	}

	return 0;
}
