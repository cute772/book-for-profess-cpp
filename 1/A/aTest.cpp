#include <iostream>
#include <string>
#include <memory>
#include "A.hpp"

// https://modoocode.com/229
// http://tcpschool.com/cpp/cpp_template_smartPointer

// std::shared_ptr 에 대한 설명
// http://egloos.zum.com/sweeper/v/2826435

int main() {
    std::cout << "program start" << std::endl;
    A one("Kim", "판교");
    std::shared_ptr<A> ptrA(new A("PTR","PC memory"));
    std::cout << one.getAddress() << std::endl;
    return 0;
}