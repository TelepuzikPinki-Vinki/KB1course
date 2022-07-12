#include <iostream>
using namespace std;
int main()
{
	
		setlocale(LC_ALL, "Russian");
		int  n, x;
		float s, a;
		cout << "Введите n= ";
		cin >> n;
		cout << "Введитеx= ";
		cin >> x;
		a = (2*x * x * x) /3.;
		s = a;
		if (n > 0) {
			for (int i = 2; i <= n; i++) {
				a *= ((-1 * x * x)/2*(2*i+1));
				s += a;
			}
			cout << "s =" << s << endl;
		}
		else cout << " Данные существуют ";
		return 0;
}

