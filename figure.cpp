#include "figure.h"
#include <iostream>

Figure::Figure()
{
    name = "������";
    sides_count = 0;
}

void Figure::print_info()
{
    std::cout << name << ": \n" << (check() ? "����������" : "������������") << "\n���������� ������: " <<
    sides_count << std::endl;
}

bool Figure::check() { return true; }
