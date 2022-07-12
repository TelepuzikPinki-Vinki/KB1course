#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main() {
	int m, n, s;
	int l;
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
	int min = a[1][1];
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++) {
	if ((j <= i) && (j <= (n - 1 - i)))
		if (a[i][j] <= min)
			min = a[i][j];
}
	cout << " min=" << min;
	return 0;
}


