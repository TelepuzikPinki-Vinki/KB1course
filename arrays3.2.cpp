#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main() {
	int m, n;
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;

	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[m];
	srand((unsigned)time(NULL));

	for (int i = 0; i < n; i++, cout << endl)
		for (int j = 0; j < m; j++) {
			a[i][j] = rand() % 15;
			cout.width(5);
			cout << a[i][j] << " ";
		}

			for (int j = 0; j < m / 2; j++)
				for (int i = 0; i < n; i++)
					swap(a[i][j], a[i][n - 1 - j]);
			cout << "___________________________  " << endl;
			for (int i = 0; i < n; i++, cout << endl)
				for (int j = 0; j < m; j++) {
					cout.width(5);
					cout << a[i][j] << " ";
				}
			       
			return 0;
		
}

