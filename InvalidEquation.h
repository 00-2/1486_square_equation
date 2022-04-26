//
// Created by c0sta on 21.04.2022.
//

#ifndef INC_1486_SQUARE_INVALIDEQUATION_H
#define INC_1486_SQUARE_INVALIDEQUATION_H


#include <stdexcept>
#include <iostream>
#include "SquareEquation.h"

class InvalidEquation
        : std::invalid_argument,
        SquareEquation {
public:
    InvalidEquation(float a, float b, float c, const char *what) : SquareEquation(0, 0, 0),
                                                                   std::invalid_argument(what)
    {
        std :: cout << "Вызвано исключение Для уравнения, a="<< a << " b=" << b << " c=" << c << std::endl
            <<"Причина:"<< what << std::endl;
    }
};


#endif //INC_1486_SQUARE_INVALIDEQUATION_H
