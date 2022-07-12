#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main() {
	int m, n, s;
	int l ; 
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;
	int* lk = new int[m];
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

	for (int j = 0; j < m; j++) {
		l = 0;
		for (int i = 0; i < n; i++) {
			if (a[i][j] % 2 == 0)
				l += 1;
		}
		lk[j] = l;
	}
	for (int j = 0; j < m; j++)
		cout << lk[j] << endl;

	for (int j = 0; j < m; j++) {
		if (lk[j] == n) {
			for (int i = 0; i < n; i++)
				a[i][j]= 0;
		      }

	}

		for (int i = 0; i < n; i++, cout << endl)
			for (int j = 0; j < m; j++) {
				cout.width(5);
				cout << a[i][j] << " ";
			}
		return 0;
	
}
