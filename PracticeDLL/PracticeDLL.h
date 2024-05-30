#pragma once

#ifdef PRACTICEDLL_EXPORTS
#define PRACTICEDLL_API __declspec(dllexport)
#else
#define PRACTICEDLL_API __declspec(dllimport)
#endif

// ����� �������� ����� || ����� � (� ������ ������ 2, ����� ����� �������� ���� � ����������)
// ������������������: 1, 2, 4, 8, 16, 32, 64, 128, ...

// ��������� ������������������
extern "C" PRACTICEDLL_API void numlist_init(
    const unsigned short num_from_keyboard);

// ��������� �������� � ����������� �� �����
extern "C" PRACTICEDLL_API bool numlist_next();

// ��������� ��������� ������ �������� ����� ��� �����
extern "C" PRACTICEDLL_API unsigned short numlist_current();

// ��������� ��������� ������ ������� � ��������
extern "C" PRACTICEDLL_API unsigned numlist_index();