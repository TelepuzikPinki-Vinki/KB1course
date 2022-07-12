#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
int main()
{
    int k=0,s=0;
    int a[10], n;
    cout << "n="; cin >> n;
    srand((unsigned int)time(NULL)); 
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 15; 
         cout << "a[" << i << "]=" << a[i] << endl;
        
    }

    for (int i = 0; i < n; i++) {
        if (((a[i] % 2) == 0) && (a[i] != 0)) {
            s += a[i];
            k += 1;
        }
    }

    if (s != 0) 
        cout << "srednee arifmetico =" << s / k;
    else cout << "net dannyih" ;

return 0;
}


