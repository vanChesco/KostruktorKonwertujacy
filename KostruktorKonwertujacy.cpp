#include <iostream>

class klasa1;

class klasa2
{
public:

    int a = 6, b = 5;
    klasa2(void) : a(0), b(0) {};
    klasa2(const klasa1& k) : a(k.r), b(k.e) { std::cout << "cpnv"; };
};

class klasa1
{
public:
    int r = 23, e = 54;

    klasa1(void) : r(0), e(0) {};

    friend klasa2::klasa2(const klasa1& k);
};

int main()
{
    klasa2 d;
    klasa1 l;

    d = l;

    std::cout << "Hello World!\n" << d.a ;
}
