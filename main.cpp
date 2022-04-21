#include <iostream>
#include "SquareEquation.h"
#include "InvalidEquation.h"

int main() {
    std::cout << "ok equation, x^2 + 2x" << std::endl;
    auto eq_ok = SquareEquation(1,2,0);
    eq_ok.print();
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "non ok equation, x^2 + 2x+3" << std::endl;
    try {
        auto eq_nok = SquareEquation(1, 2, 3);
        eq_nok.print();
    }
    catch(InvalidEquation) {
        std::cout << "We catch exception" << std::endl;
    }
    return 0;
}
