#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <float.h>

using namespace std;
int main()
{
    int  n,v;
    setlocale(LC_ALL, "rus");
    cout << "n="; cin >> n;
    srand((unsigned int)time(NULL));
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 15;
        cout << "a[" << i << "]=" << a[i] << endl;
    }

    int min = INT_MAX;
    int mini = 0;
    for (int i = 0; i < n; i++) {
        if ((a[i] % 2) && (a[i] <= min)) {
            min = a[i];
            mini = i;
        }
    }
    if (min != INT_MAX)
        for (int i = 0; i < n; i++) {
            a[n - 1] = a[mini];
            cout << "a[" << i << "]=" << a[i] << endl;
        }
    else cout << "  нет подходящих элементов ";
    return 0;
}
