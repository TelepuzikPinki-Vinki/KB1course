// ConsoleApplication77.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

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


struct Data
{
    int hourA;
    int minA;
    int secA;
    int hourB;
    int minB;
    int secB;

};


Data  STR_Data(string strA)  //создаем из строки структуру первого времени
{
    Data dateA;
    //day
    string str1 = strA.substr(0, 2); // копируем из введенной строки  первые два символа - часы 
    const char* d = str1.c_str();
    int dd = atoi(d);     //переводит данные строки в тип инт 
    dateA.hourA = dd;     // присваиваем переменной структуры наше значение 
     //month
    str1 = strA.substr(3, 2);// копируем из введенной строки вторые два числа -минуты 
    d = str1.c_str();
    dd = atoi(d);
    dateA.minA = dd;
    //year
    str1 = strA.substr(6, 2);//создаем подстроку с секундами 
    d = str1.c_str();
    dd = atoi(d);
    dateA.secA = dd;

    return dateA;

}


Data STR_Data(string strB)   //создаем из строки структурувторого времени 
{
    Data dateB;
    //day
    string str1 = strB.substr(0, 2); 
    const char* d = str1.c_str();
    int dd = atoi(d);   
    dateB.hourB = dd;    
     //month
    str1 = strB.substr(3, 2);
    d = str1.c_str();
    dd = atoi(d);
    dateB.minB = dd;
    //year
    str1 = strB.substr(6, 2);
    d = str1.c_str();
    dd = atoi(d);
    dateB.secB = dd;

    return dateB;

}

int chet();
int chet(){
    Data Vo;
    int sec,cha,min,vsego;
    cha = Vo.hourB - Vo.hourA;
    min = Vo.minB - Vo.minA;
    sec = Vo.secB - Vo.secA;
    vsego = (cha * 3600 + min * 60 + sec);
    return (vsego);
}

int main()
{
    setlocale(LC_ALL, "russian");
    ofstream out("sec.txt");
    ifstream in("time.txt");
    string strA; string strB;
    file();
    while (in.peek() != EOF)
    {   in >> strA ;
        in >> strB ;
    }
    Data  STR_Hotel(string strA);
    Data STR_Data(string strB);
    chet();
    out << chet();
    in.close();
    out.close();
    return (0);
}
