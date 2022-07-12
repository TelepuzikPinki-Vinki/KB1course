// ConsoleApplication76.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<math.h>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

struct Tochka {
    double x, y;
};

int file();
int file() //проверяем открылся ли файл 
{
    setlocale(LC_ALL, "russian");
    ofstream out("givut.txt");
    ifstream in("posetiteli.txt");
    if (!(in.is_open()))
    {
        cout << "  =(  ошибка" << endl;
        return (0);
    }
    else cout << " =)  успешно" << endl;
}


int prover(int& n, Tochka a[]) {
    for (int i = 0; i < n; i++) 
    {
      if ( (a[i + 1].x - a[i].x) * (a[i + 2].y - a[i].y) = (a[i + 1].y - a[i].y)(a[i + 2].x - a[i].x)) {
            for (int i =3; i < n; i++) {}
       }

    }
}


int main()
{
    setlocale(LC_ALL, "russian");
    ofstream out("lejat.txt");
    ifstream in("tochka.txt");
    int n;
    cout << " А сколько всего точек ?" << "n = "; cin >> n;
    file();
    Tochka* a = new Tochka[n];
    while (in.peek() != EOF) 
    {
        for (int i = 0; i < n; i++) 
        {
            in >> a[i].x >> a[i].y;
        }
    }
    prover();

}
