#include <iostream>
#include "Maths.hpp"

int main() {
    Maths m;
    std::cout << m.addition(5,4) << std::endl;
    std::cout << m.soustraction(4,9) << std::endl;
    std::cout << m.multiplication(1,8) << std::endl;
    std::cout << m.division(4,5) << std::endl;
    return 0;
}