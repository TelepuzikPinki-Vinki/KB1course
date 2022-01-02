#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <vector>
#include <locale.h>
#include <wchar.h>
#include <algorithm>

using namespace std;
// Макрос, а процедура подстановки - макроподстановка
#define ll long long

// Пользовательский тип данных - студент. Он содержит поля
// Фамилия, имя, отчество, возраст, зарплата - это его параметры

struct Student {
    string surname;
    string name;
    string lastname;
    int age;
    ll salary;
    // Конструктор от нужных нам аргументов 
    Student(const string& _surname, const string& _name, 
        const string& _lastname, int _age, ll _salary);
    // Конструктор по умолчанию (без аргументов)
    Student();

};

Student::Student() {
    
}

// Мы обращаемся к пространству имен "Student"(то есть переходим ко всем полям и методам этого класса)
// и описываем работу конструктора от этих аргументов
Student::Student(const string& _surname, const string& _name, const string& _lastname, int _age, ll _salary) {
    surname = _surname;
    name = _name;
    lastname = _lastname;
    age = _age;
    salary = _salary;
}

// "Перегружаем" оператор << для левого аргумента ofstream(файловый поток данных)
// и константной ссылки на студента и описываем, что мы имеем в виду,
// когда хотим вывести студента в поток.
ofstream& operator<<(ofstream& out, const Student& student) {
    out << student.surname << ' ' << student.name << ' ' 
        << student.lastname << ' ' << student.age 
        << ' ' << student.salary << endl;
    // Возвращаем поток в результате операции, чтобы мы могли делать
    // вещи по типу cout << x << y << z:
    // (cout << x) << y << z -> cout << y << z
    // (cout << y) << z -> cout << z
    // cout << z -> cout УРА, Я СВОБОДЕН
    return out;
}

// Аналогичная перегрузка для консольного потока 
ostream& operator<<(ostream& out, const Student& student) {
    out << student.surname << ' ' << student.name << ' ' 
        << student.lastname << ' ' << student.age 
        << ' ' << student.salary << endl;
    return out;
}

// "Перегружаем" оператор < для сравнения двух студентов
// Фактически, после этого при записи x < y, где x и y типа
// Student С++ будет точно понимать, что вернуть - true или false.
bool operator<(const Student& s1, const Student& s2) {
    return s1.salary < s2.salary;
}

// Аналогично для оператора >
bool operator>(const Student& s1, const Student& s2) {
    return s2.salary < s1.salary;
}

// Ну и тут
bool operator==(const Student& s1, const Student& s2) {
    return (!(s1.salary < s2.salary) && !(s1.salary > s2.salary));
}

int main() {
    // vector - динамически растущий массив. Он имеет несколько основных
    // операций, таких как push_back() - вставка в конец, pop_back() - удаление
    // из конца и некоторых других. За всеми методами - в документацию.
    // Сама суть следующая: у вектора изначально 1 элемент, при попытке 
    // вставить очередной элемент он ищет место в себе, если места больше нет
    // ему некуда деваться и он растет вдвое и готов принимать в свое
    // сердечко новых друзей. Так после попытки вставить второй элемент
    // у него будет всего 2 места и оба занятые
    // Дальше картина будет следующей: 
    // (общее число мест, занятых)
    // 4, 3
    // 4, 4
    // 8, 5
    // 8, 6
    // и т.д
    vector<Student> students;
    // Связываем входной поток с файлом
    ifstream in("data1.txt");
    // Объявляем поля, которые будем считывать
    string surname, name, lastname;
    ll age, salary;
    // Безопасное считывание - мы гарантируем, что в рамках цикла
    // значение всех полей считано корректно, так как объект
    // in имеет тип ifstream, умеющий конвертироваться в bool
    // по принципу: живой? класс, тру. иначе все грустно :(
    while (in >> surname >> name >> lastname >> age >> salary) {
        // Создаем нового студента из заданных аргументов (вызывая тот самый)
        // конструктор
        Student newStudent(surname, name, lastname, age, salary);
        // Вставляем его в конец вектора с помощью метода push_back()
        students.push_back(newStudent);
    }
    // Сортировка студентов. ВАЖНО: без того оператора < выше
    // работать не будет, потому что С++ понятия не имеет
    // как плоды твоей больной фантазии сортировать.
    // Будьте добры определить самостоятельно.
    sort(students.begin(), students.end());

    // Foreach или auto-цикл. Подробно можно почитать, если коротко
    // То мы поочередно берем элемент из students 
    // и пишем его в переменную student
    for (auto student : students) {
        // Если приведенная к нижнему регистру буква меньше нашей, то выводим.
        if (tolower(student.surname[0]) <= 'o') {
            cout << student;
        }
    }
    // Вот и фсе, девочки и мальчики! С++ - это прекрасно. ща я

}