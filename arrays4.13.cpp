#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	int  n, s;
	cout << "n = "; cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[n];
	s = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (j % 2 == 0) {
				for (int i = n; i > 0; i--) {
					a[i][j] = s;
					s += 1;
				}
			}
			else
				for (int i = 0; i < n; i++) {
					a[i][j] = s;
					s += 1;
				}

		}

	for (int i = 0; i < n; i++, cout << endl)
		for (int j = 0; j < n; j++) {
			cout.width(5);
			cout << a[i][j] << " ";
		}
	return 0;
}

