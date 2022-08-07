#pragma once
#include <string>

class Figure {
public:
    Figure();
    virtual void print_info();
protected:
    virtual bool check();

    std::string name;
    int sides_count;
};

