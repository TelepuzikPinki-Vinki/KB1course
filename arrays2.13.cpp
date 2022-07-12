#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
int main()
{
    int  n;
    cout << "n="; cin >> n;
    srand((unsigned int)time(NULL));
    int*a = new int [n];
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 15;
        cout << "a[" << i << "]=" << a[i] << endl;
    }
    int max = 0;
    int maxi = 0;
        for (int i = 1; i < n; i++) {
            if (!(a[i] % 2) && a[i] >= max) {
                max = a[i];
                maxi = i;
            }
    } 
        cout << "maxi="<<maxi;
    return 0;
}

