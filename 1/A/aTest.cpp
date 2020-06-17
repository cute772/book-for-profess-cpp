#include <iostream>
#include <string>
#include "A.hpp"

int main() {
    std::cout << "program start" << std::endl;
    A one("Kim", "판교");
    std::cout << one.getAddress() << std::endl;
    return 0;
}