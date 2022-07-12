#include <iostream>
#include <iostream>
using namespace std;
int main()
{
	int n, a, i; char v;
	setlocale(0, "");
	cout << "введите n: "; 	
	cin >> n;
	cout << "введите а: ";
		if (n < 0)
		cout << "ошибка" << endl;
	else
	{
		int s = 0;
		cout << " каким способоом хотите решить программу ?" << endl;
		cout << " w-while  dw-do while   f-for ? - ";
		cin >> v ;
		i = 0;
		switch (v) {
		case 'f' : 
			for (i ; i < n; i++) {
				cin >> a;
				s += a;
				cout << "sum = " << s << endl;
			              } break;
		case 'w' :
			
			while (i < n)
			{
				cin >> a;
				s += a;
				cout << "sum = " << s << endl;
				i++;
			} break;
		case 'dw' : 
			
			do {
				cin >> a;
				s += a;
				cout << "sum = " << s << endl;
				i++;
			} while (i < n); break;

		default: cout << "не верно ";
		}
	}

	return 0;
}
