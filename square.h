#pragma once
#include "rectangle.h"

class Square : public Rectangle {
public:
    Square(int new_a);

protected:
    virtual bool check()  override;

};

