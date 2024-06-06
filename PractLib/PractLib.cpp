// PractLib.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <cmath>
#include <tuple>
#include "Windows.h"

int main()
{
    setlocale(LC_ALL, "RUssian");

    HINSTANCE load;
    load = LoadLibrary(L"ConsoleApplication1.dll");

    typedef bool (*find) (std::string, std::string);
    find Find;
    Find = (find)GetProcAddress(load, "Find");
    std::string a1, b1;
    std::cout << "Введите строку: ";
    std::cin >> a1;
    std::cout << "Ищем: ";
    std::cin >> b1;
    std::string c = Find(a1, b1) ? "true" : "false";
    std::cout << c;
    FreeLibrary(load);
}


