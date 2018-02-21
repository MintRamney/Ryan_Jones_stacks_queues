#include <iostream>
#include "functions.h"

int main(int argc, char** argv){
    std::cout << balancedSymbols("()(){}{}[][]") << std::endl;
    std::cout << balancedSymbols("{][]{}{())}{") << std::endl;
    std::cout << balancedSymbols("{[()]}()") << std::endl;
    std::cout << balancedSymbols("{") << std::endl;

    std::cout << "Infix: 1 + 2 + 3 + 4" << std::endl;
    std::cout << "Postfix: " << iToP("1+2+3+4") << std::endl;

    std::cout << "Infix: 1 + 2 * 3 * 4 / 5 - 1" << std::endl;
    std::cout << "Postfix: " << iToP("1+2*3*4/5-1") << std::endl << std::endl;

    std::cout << "Infix: (10+2) / ((3-4) + (3 * 1 + 4))" << std::endl;
    std::cout << "Postfix: " << iToP("(1+2)/((3-4)+(3*1+4))") << std::endl;
}
