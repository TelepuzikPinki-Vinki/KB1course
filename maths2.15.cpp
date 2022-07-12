#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int  n;
	float s, a;
	cout << "Введите n= ";
	cin >> n;
	s = 1;
	if (n > 0) {
		for (int i = 1; i <= n; i++) {
			s += pow(cos(i),2) ;
		}
		cout << "s =" << s << endl;
	}
	else cout << " Данные существуют ";
	return 0;

}

