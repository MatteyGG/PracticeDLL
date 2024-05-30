// PracticeDLL.cpp : ���������� �������������� ������� ��� DLL.
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include <cmath>
#include "PracticeDLL.h"

// ���������� ����������:
static unsigned index_; // ������� � �������
static unsigned short num_; // �����|| ����� ��� ����������
static unsigned short current_; // ������� ����� || �����

// ���������� �������� ��� � ��� ����������
void numlist_init( const unsigned short num_from_keyboard )
{
    index_ = 0;
    current_ = 1;
    num_ = num_from_keyboard;
}

// �������� � ����������� �� �����

bool numlist_next()
{
    // ��������� �� ������������
    if (SHRT_MAX <= current_)
    {
        return false;
    }
    ++index_;
    current_ = pow(num_, index_);
    return true;
}

// ������ ������� ����� || �����, ����������� � �������
unsigned short numlist_current()
{
    return current_;
}

// ������ ������� �������
unsigned numlist_index()
{
    return index_;
}