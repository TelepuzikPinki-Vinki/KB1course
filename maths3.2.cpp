#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int  n,x;
	float s, a;
	cout << "Ââåäèòå n= ";
	cin >> n;
	cout << "Ââåäèòåx= ";
	cin >> x;
	a = x / 2.;
	s = a;
	if (n > 0) {
		for (int i = 2; i <= n; i++) {
			a *= ((-1 * x * x) / i);
			s += a;
		}
		cout << "s =" << s << endl;
	}
	else cout << " Äàííûå ñóùåñòâóþò ";
	return 0;

}
