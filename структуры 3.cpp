// ConsoleApplication75.cpp : Ётот файл содержит функцию "main". «десь начинаетс€ и заканчиваетс€ выполнение программы.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;
int dd = 03; int dm = 05; int dg = 2021;///заданна€ дата

int reshau(); //провер€ем есть ли кто в отеле в этот день 
int reshau(int dd, int dm , int dg) {
    Hotel gi;
    if ((dd <= gi.dayO) & (dm <= gi.monthO) & (dg <= gi.yearO))
        return(0)
    else cout << "no one =( ";
}

int file();
int file() //провер€ем открылс€ ли файл 
{   setlocale(LC_ALL, "russian");
    ofstream out("givut.txt");
    ifstream in("posetiteli.txt");
    if (!(in.is_open())) 
    {
        cout << "  =(  ошибка" << endl;
        return (0);
    }
    else cout << " =)  успешно" << endl;
}


struct Hotel   
{
    string Name1;
    string Name2;
    string Name3;
    int dayP;
    int monthP;
    int yearP;
    int dayO;
    int monthO;
    int yearO;
   
};


Hotel STR_Hotel(string strP)  //создаем из строки структуру даты приезда 
{
    Hotel dateP;
    //day
    string str1 = strP.substr(0, 2); // копируем из введенной строки с датой первые два символа -день 
    const char* d = str1.c_str();
    int dd = atoi(d);     //переводит данные строки в тип инт 
    dateP.dayP = dd;     // присваиваем переменной структуры наше значение 
     //month
    str1 = strP.substr(3, 2);// копируем из введенной строки с датой вторые  два символа -мес€ц
    d = str1.c_str();
    dd = atoi(d);
    dateP.monthP = dd;
     //year
    str1 = strP.substr(6, 4);// копируем из введенной строки с датой 4 символа года 
    d = str1.c_str();
    dd = atoi(d);
    dateP.yearP = dd;
   
        return dateP;

}


Hotel  STR_Hotel(string strO)   //создаем из строки структуру даты отъезда 
{
    Hotel dateO;
    //day
    string str1 = strO.substr(0, 2); // копируем из введенной строки с датой первые два символа -день 
    const char* d = str1.c_str();
    int dd = atoi(d);     //переводит данные строки в тип инт 
    dateO.dayO = dd;     // присваиваем переменной структуры наше значение 
     //month
    str1 = strO.substr(3, 2);// копируем из введенной строки с датой вторые  два символа -мес€ц
    d = str1.c_str();
    dd = atoi(d);
    dateO.monthO = dd;
    //year
    str1 = strO.substr(6, 4);// копируем из введенной строки с датой 4 символа года 
    d = str1.c_str();
    dd = atoi(d);
    dateO.yearO = dd;

    return dateO;

}

int main()
{
    setlocale(LC_ALL, "russian");
    ofstream out("givut.txt");
    ifstream in("posetiteli.txt");
    string strO; string strP;
    file();
    Hotel Twix;
    while (in.peek() != EOF) 
    {
        in >> Twix.Name1;
        in >> Twix.Name2;
        in >> Twix.Name3;
        in >> string strP;
        in >> string strO;

    
    }
Hotel STR_Hotel(string strP);
Hotel  STR_Hotel(string strO);

    if (!reshau()) {
        out << Twix.Name1;
        out << Twix.Name2;
        out << Twix.Name3;
        out << string strP;
        out << string strO;
 
    }
    in.close;
    out.close;
    return (0);
}
/* 
*/