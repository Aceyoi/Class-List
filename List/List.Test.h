//Сапожников Юрий ИВТ-22

#pragma once

#include <iostream>
#include <cassert>
#include "List.Class.h"

using namespace std;

/// проверка данных
void testcheck() {

    LinkedList<int> ListTestint;
    LinkedList<string> ListTeststr;

    ListTestint.append(10);
    ListTestint.append(20);
    ListTestint.append(30);

    assert(ListTestint.searchcheck(20) == true);
    assert(ListTestint.searchcheck(50) == false);

    assert(ListTestint.search(20) == 20);
    assert(ListTestint.search(50) != -1);
    //assert(ListTestint.search(50) == "Число не найденно");


    assert(ListTestint.search_Index(20) == 2);
    assert(ListTestint.search_Index(50) == -1);

    ListTestint.remove(20);
    assert(ListTestint.searchcheck(20) == false);
    
    ListTestint.clear();
    assert(ListTestint.searchcheck(10) == false);

    ListTeststr.append("Hello");
    ListTeststr.append("World");

    assert(ListTeststr.search("Hello") == "Hello");

    assert(ListTeststr.search_Index("Hello") == 1);

    assert(ListTeststr.searchcheck("Hello") == true);

    ListTeststr.remove("Hello");
    assert(ListTeststr.searchcheck("Hello") == false);

    ListTeststr.clear();
    assert(ListTeststr.searchcheck("World") == false);

    system("cls");
}