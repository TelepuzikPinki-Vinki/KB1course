#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
int main()
{
    int n, b, c;
    cout << "n="; cin >> n;
    srand((unsigned int)time(NULL));
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 15;
        cout << " " << endl;
        cout << "a[" << i << "]=" << a[i] << endl;


    }
    if ((n % 2) != 0) {
     
        for (int i = 0; i < n; i++) {
            b = a[0];
            a[0] = a[(n / 2)];
            a[(n / 2)] = b;
        }
        for (int i = 0; i < n; i++) {
             cout << " " << endl;
        cout << "a[" << i << "]=" << a[i] << endl;
        }

        }
    
    if ((n % 2) == 0) {
        for (int i = 0; i < n; i++) {
        
            swap(a[(n / 2)], a[(n / 2) - 1]);
        }

        for (int i = 0; i < n; i++) {
             cout << " " << endl;
        cout << "a[" << i << "]=" << a[i] << endl;
        }

        }

        return 0;
   
}

