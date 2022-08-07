#pragma once
#include "parallelogram.h"

class Rectangle : public Parallelogram {
public:
    Rectangle(int new_a, int new_b);

protected:
    virtual bool check()  override;
};

