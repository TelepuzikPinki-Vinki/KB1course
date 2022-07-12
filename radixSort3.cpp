// ConsoleApplication78.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include  <vector>
using namespace std;

int file();
int file() //проверяем открылся ли файл 
{
    setlocale(LC_ALL, "russian");
    ofstream out("sort.txt");
    ifstream in("sotrudnik.txt");
    if (!(in.is_open()))
    {
        cout << "  =(  ошибка" << endl;
        return (0);
    }
    else cout << " =)  успешно" << endl;
}

struct Spisok {
    string Name;
    string tipe;
    string data;
    int opit;
    int dengi[20];
};

/*Вход: A — массив, N — размер массива, k — максимальный разряд
Выход: Отсортированный массив
начало алгоритма
· создаем P дополнительных векторов;
цикл для i = 0 до k выполнять
цикл для j = 0 до N выполнять
· добавляем a[j] в [a[j]/P^ i mod P] вектор;
· перезаписываем вектора от 0-вого до P − 1-ого в массив A;
· очищаем вектора;
конец алгоритма*/

int radixSort() {
    Spisok vi;           
    int n = 20; int k = 5; 
    vi.dengi[20];
    vector < int > count(10);
    for (int i = 0; i < 5; ++i) 
    {
        for ( int j = 0; j < 19; ++i)
        {
            int s = (vi.dengi[j]; / (10 ^ i)) % 10);
            count[s] = vi.dengi[j];
        }
        for (int i = 0; i < 19; ++i) {
            for (int j = 0; j < count.size(); i++)
            {
                vi.dengi[i]= count[j];
            }
        }
        for (int i = 0; i < count.size(); i++)
        {
            count[i].clear();
        }
       
    }
    return (vi.dengi[20]);
}




int main()
{
    setlocale(LC_ALL, "russian");
    ofstream out("givut.txt");
    ifstream in("sotrudnik.txt");
    file();
    Spisok lu;
    int*a = new a[i];
    while (in.peek() != EOF)
    {
        in >> lu.Name;
        in >> lu.tipe;
        in >> lu.data;
        in >> lu.opit;
        for (int i = 0; i < 19; ++i)
        {
            in >> lu.dengi[i];
        }
       
    }
  
    radixSort();
    

}




/*  void countе(vector<int>& vec, int P) {   //  через сортировку посчетом 
    vector<int> tmp = vec;                  //  P=10^i, оно помогает нам вытащить след. разряды 
    vector<int> count(10);                  // tmp- хранит копию нашего массива, count-вектор по нашей с.с.                                            в который бем закидыывать числа соотв. разряда 
    for (int i = 0; i < vec.size(); ++i) {
        count[(vec[i] / place) % 10]++;      // Увеличиваем значение вспомогательного массива размера нашей с.с  по индексу                                            
    }                                        // равному текущей цифре числа (по сути записываем количество таких цифр ) 

    for (int i = 1; i < 10; ++i) {
        count[i] += count[i - 1];             // Определяем последнее вхождение каждой цифры 
    }

    for (int i = vec.size() - 1; i > -1; --i) {         // Проходимся от конца массива к началу 
        vec[--count[(tmp[i] / place) % 10]] = tmp[i];   // и вставляем элемент в текущее граничное значение
    }                                                   // уменьшая после это значение на 1
}

    vector<int> radixSort( vector<int> vec) {
    auto it = max_element(vec.begin(), vec.end());
    int maxValue = *it;

    for (int P = 1; maxValue / P > 0; P *= 10) {        // суть поразрядной сортировки сводится к
        countе(vec, P);                                // последовательному вызову
    }
    return (vec);
}*/
