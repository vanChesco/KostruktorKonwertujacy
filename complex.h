#pragma once
#include <iostream>

class klasa2;


class klasa1
{
public:
	int r = 23, e = 54;

	klasa1(void);
	klasa1(int, int);
	klasa1(const klasa2& k);

	friend klasa2::klasa2(const klasa1& k);
};

class klasa2
{
public:

	int a = 6, b = 5;

	klasa2(void);
	klasa2(int, int);
	klasa2(const klasa1& k);

	friend klasa1::klasa1(const klasa2& k);
};