#pragma once
#include <iostream>

class klasa1;

class klasa2
{
public:

    int a = 6, b = 5;

    klasa2(void);
    klasa2(int, int);
    klasa2(const klasa1& k);
};

class klasa1
{
public:
    int r = 23, e = 54;

    klasa1(void);
    klasa1(int, int);

    friend klasa2::klasa2(const klasa1& k);
};