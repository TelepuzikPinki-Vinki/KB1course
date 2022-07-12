// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

 #include <iostream>
 #include <string>
 #include <iomanip>
 #include <fstream>

using namespace std;
//bool proverka(int a[]);
ofstream out("t.txt");

void proverka(int *a) {
	for (int i = 0; i < 14; ++i) {
		float  c = sqrt(a[i]);
		int s = sqrt((float)a[i]);
		if (fabs(c - s) < 0.00001) {
			out << a[i] << " ";
		}
	}
}


int main()
{
	int* a= new int[15];
	int kv[15];
	string x; 
	ifstream in("t.txt"); 
	int i = 0;
	while (in.peek() != EOF) {
		in >> a[i++];
	}

	 proverka(a);
	 in.close();
	 out.close();
	 return 0;

}

