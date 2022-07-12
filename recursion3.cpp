// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <math.h>
using namespace std;

int rec( int x, int n);
int h;

	int main()
	{
		int n, x ;
		cin >> x; cin >> n;
		  for(int i=0;i<n;++i)
			rec(i);
	}

	int rec( int x , int n) {
		if (n == 0)
			return (1);
		if (n == 1)
			return (2 * x);
		if ((n != 1) && (n != 0)) {
			h = 2 * x * rec(h - 1) - 2 * n * rec(h - 2);
			return(h);
		}
	}


