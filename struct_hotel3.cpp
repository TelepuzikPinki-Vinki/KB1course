// ConsoleApplication75.cpp : Ýòîò ôàéë ñîäåðæèò ôóíêöèþ "main". Çäåñü íà÷èíàåòñÿ è çàêàí÷èâàåòñÿ âûïîëíåíèå ïðîãðàììû.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;
int dd = 03; int dm = 05; int dg = 2021;///çàäàííàÿ äàòà

int reshau(); //ïðîâåðÿåì åñòü ëè êòî â îòåëå â ýòîò äåíü 
int reshau(int dd, int dm , int dg) {
    Hotel gi;
    if ((dd <= gi.dayO) & (dm <= gi.monthO) & (dg <= gi.yearO))
        return(0)
    else cout << "no one =( ";
}

int file();
int file() //ïðîâåðÿåì îòêðûëñÿ ëè ôàéë 
{   setlocale(LC_ALL, "russian");
    ofstream out("givut.txt");
    ifstream in("posetiteli.txt");
    if (!(in.is_open())) 
    {
        cout << "  =(  îøèáêà" << endl;
        return (0);
    }
    else cout << " =)  óñïåøíî" << endl;
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


Hotel STR_Hotel(string strP)  //ñîçäàåì èç ñòðîêè ñòðóêòóðó äàòû ïðèåçäà 
{
    Hotel dateP;
    //day
    string str1 = strP.substr(0, 2); // êîïèðóåì èç ââåäåííîé ñòðîêè ñ äàòîé ïåðâûå äâà ñèìâîëà -äåíü 
    const char* d = str1.c_str();
    int dd = atoi(d);     //ïåðåâîäèò äàííûå ñòðîêè â òèï èíò 
    dateP.dayP = dd;     // ïðèñâàèâàåì ïåðåìåííîé ñòðóêòóðû íàøå çíà÷åíèå 
     //month
    str1 = strP.substr(3, 2);// êîïèðóåì èç ââåäåííîé ñòðîêè ñ äàòîé âòîðûå  äâà ñèìâîëà -ìåñÿö
    d = str1.c_str();
    dd = atoi(d);
    dateP.monthP = dd;
     //year
    str1 = strP.substr(6, 4);// êîïèðóåì èç ââåäåííîé ñòðîêè ñ äàòîé 4 ñèìâîëà ãîäà 
    d = str1.c_str();
    dd = atoi(d);
    dateP.yearP = dd;
   
        return dateP;

}


Hotel  STR_Hotel(string strO)   //ñîçäàåì èç ñòðîêè ñòðóêòóðó äàòû îòúåçäà 
{
    Hotel dateO;
    //day
    string str1 = strO.substr(0, 2); // êîïèðóåì èç ââåäåííîé ñòðîêè ñ äàòîé ïåðâûå äâà ñèìâîëà -äåíü 
    const char* d = str1.c_str();
    int dd = atoi(d);     //ïåðåâîäèò äàííûå ñòðîêè â òèï èíò 
    dateO.dayO = dd;     // ïðèñâàèâàåì ïåðåìåííîé ñòðóêòóðû íàøå çíà÷åíèå 
     //month
    str1 = strO.substr(3, 2);// êîïèðóåì èç ââåäåííîé ñòðîêè ñ äàòîé âòîðûå  äâà ñèìâîëà -ìåñÿö
    d = str1.c_str();
    dd = atoi(d);
    dateO.monthO = dd;
    //year
    str1 = strO.substr(6, 4);// êîïèðóåì èç ââåäåííîé ñòðîêè ñ äàòîé 4 ñèìâîëà ãîäà 
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
