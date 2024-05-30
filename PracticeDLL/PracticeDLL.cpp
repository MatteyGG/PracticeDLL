// PracticeDLL.cpp : Определяет экспортируемые функции для DLL.
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include <cmath>
#include "PracticeDLL.h"

// Внутренние переменные:
static unsigned index_; // Степень и счётчик
static unsigned short num_; // Число|| цифра для возведения
static unsigned short current_; // Текущее число || цифра

// Определяем числовой ряд и его переменные
void numlist_init( const unsigned short num_from_keyboard )
{
    index_ = 0;
    current_ = 1;
    num_ = num_from_keyboard;
}

// Проверка и продвижение по циклу

bool numlist_next()
{
    // Проверяем на переполнение
    if (SHRT_MAX <= current_)
    {
        return false;
    }
    ++index_;
    current_ = pow(num_, index_);
    return true;
}

// Отдаем текушее число || цифра, возведенное в степень
unsigned short numlist_current()
{
    return current_;
}

// Отдаем текушую степень
unsigned numlist_index()
{
    return index_;
}