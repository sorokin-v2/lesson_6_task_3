#include "triangle.h"
#include <iostream>

Triangle::Triangle(int new_a, int new_b, int new_c, int new_A, int new_B, int new_C) :
        a{ new_a }, b{ new_b }, c{ new_c }, A{ new_A }, B{ new_B }, C{ new_C }
    {
        name = "�����������";
        sides_count = 3;
    }
void Triangle::print_info()
    {
        Figure::print_info();
        std::cout << "�������: a=" << a << " b=" << b << " c=" << c << "\n" <<
            "����: A=" << A << " B=" << B << " C=" << C << std::endl;
    }

bool Triangle::check() { return (A + B + C) == 180 ? true : false; }
