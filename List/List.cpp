//Сапожников Юрий ИВТ-22
#include <iostream>
#include <cassert>
#include "List.Class.h"
#include "List.Test.h"


using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    testcheck();

    LinkedList<int> intList; // Список для целых чисел

    intList.append(10); // Добавление элемента
    intList.append(20);
    intList.append(30);

    intList.print();   // Вывод списка

    intList.searchtext(20); // Поиск
    intList.searchtext(30); // Поиск

    intList.remove(20); // Удалеие 
    intList.print(); // Вывод списка

    intList.clear();  // Очищение
    intList.print(); // Вывод списка

    LinkedList<string> stringList; // Список для строк

    stringList.append("Hello"); // Поиск строки
    stringList.append("World");

    stringList.searchtext("Hello");
    stringList.searchtext("World");

    stringList.print(); // Вывод списка

    return 0;
}