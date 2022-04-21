//
// Created by c0sta on 21.04.2022.
//

#ifndef INC_1486_SQUARE_INVALIDEQUATION_H
#define INC_1486_SQUARE_INVALIDEQUATION_H


#include <stdexcept>

class InvalidEquation
        : std::invalid_argument { ;
public:
    InvalidEquation(const char * what):std::invalid_argument(what){}
};


#endif //INC_1486_SQUARE_INVALIDEQUATION_H
