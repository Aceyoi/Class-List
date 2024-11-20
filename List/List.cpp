//Сапожников Юрий ИВТ-22
#include <iostream>
#include <cassert>
#include "List.Class.h"
#include "List.Class.Iter.h"
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

    cout << endl << "Работа с итератором:" << endl;

    LinkedListIter<int> intListiter; // Список для целых чисел

    intListiter.append(20); // Добавление элемента
    intListiter.append(10);
    intListiter.append(30);

    // Использование итератора для вывода элементов
    cout << "Элементы списка: ";

    for (auto it = intListiter.begin(); it != intListiter.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Альтернативный способ с циклом range-based for
    cout << "Элементы списка (range-based for): ";
    for (const auto& value : intListiter) {
        cout << value << " ";
    }
    cout << endl << endl;

    return 0;
}