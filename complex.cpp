#include "complex.h"

klasa2::klasa2(void) : a(0), b(0) {};
klasa2::klasa2(int a, int b) : a(a), b(b) {};
klasa2::klasa2(const klasa1& k) : a(k.r), b(k.e)
{
	std::cout << "conv\n\n"; 
};


klasa1::klasa1(void) : r(0), e(0) {};
klasa1::klasa1(int r, int e) : r(r), e(e) {}
klasa1::klasa1(const klasa2& k) : r(k.a), e(k.b)
{
	std::cout << "conv\n\n";
};