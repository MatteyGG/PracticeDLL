#pragma once

#ifdef PRACTICEDLL_EXPORTS
#define PRACTICEDLL_API __declspec(dllexport)
#else
#define PRACTICEDLL_API __declspec(dllimport)
#endif

// Вывод степеней числа || цифры х (В данном случае 2, позже можно добавить ввод с клавиатуры)
// Последовательность: 1, 2, 4, 8, 16, 32, 64, 128, ...

// Описываем последовательность
extern "C" PRACTICEDLL_API void numlist_init(
    const unsigned short num_from_keyboard);

// Описываем проверку и продвижение по циклу
extern "C" PRACTICEDLL_API bool numlist_next();

// Описываем процедуру отдачи текущего числа или цифры
extern "C" PRACTICEDLL_API unsigned short numlist_current();

// Описываем процедуру отдачи степени и счётчики
extern "C" PRACTICEDLL_API unsigned numlist_index();