#include <iostream>
#include "complex.h"

//todo WAŻNA RZECZ!!! W takiej sytuacji, gdzie nastepuje forward declaration, koniecznie trzeba przygotowac klase zlozona z pliku naglowkowego i zrodlowego (.h i .cpp)

int main()
{
    klasa2 d(1, 2);
    klasa1 l(5, 6);

    d = l;

    std::cout << "Hello World!\n" << d.a ;
}
