//
// Created by c0sta on 20.04.2022.
//

#include <iostream>
#include "SquareEquation.h"
#include "InvalidEquation.h"

SquareEquation::SquareEquation(float a_,float b_,float c_) : a(a_), b(b_),c(c_) {
    if (b_*b_ - 4*a_*c_ < 0){
        throw InvalidEquation("I ve no roots");
    }
}

void SquareEquation::print() {
    std::cout << "a:" <<  this->a << "\nb:" << this->b << "\nc:" << this->c << std::endl;
}