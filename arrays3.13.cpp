#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main() {
	int m, n, s;
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;
	int* ms = new int[m];
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[m];
	srand((unsigned)time(NULL));  // заполняет массив случайными числами 

	for (int i = 0; i < n; i++, cout << endl)
		for (int j = 0; j < m; j++) {
			a[i][j] = rand() % 15;
			cout.width(5);
			cout << a[i][j] << " ";
		}

	for (int i = 0; i < n; i++) {
		s = 0;
		for (int j = 0; j < m; j++) {
			s = s + a[i][j];

		}

		ms[i] = s;
		cout << "summa v " << i<<"  "<<"stroke =" << ms[i] << endl;
	}
	int maxs = 0; int ims = 0;
	for (int i = 0; i < n; i++)
		if (ms[i] >= maxs) {
			maxs = ms[i];
			ims = i;
		}
	cout << " "<< "ims=" << ims <<endl;

		for (int j = 0; j < m; j++)
			swap( a[0][j], a[ims][j]);


	cout << "---------------------------" << endl;

	for (int i = 0; i < n; i++, cout << endl)
		for (int j = 0; j < m; j++) {
			cout.width(5);
			cout << a[i][j] << " ";
		}

	return 0;

}

