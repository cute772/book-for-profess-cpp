#include <iostream>
#include <string>
#include <memory>
#include "B.hpp"

// https://modoocode.com/229
// http://tcpschool.com/cpp/cpp_template_smartPointer

// std::shared_ptr 에 대한 설명
// http://egloos.zum.com/sweeper/v/2826435

void doThrower()
{
    throw 1;
}

void doHeap() 
{
    B* pb = new B();
    //pb->thrower();
    doThrower();
    delete[] pb;
}

int main() {
    std::cout << "program start" << std::endl;
    //B one;
    //std::cout << "포인터 인스턴스 : " << ptrA->getAddress() << std::endl;
    //std::cout << one.getAddress() << std::endl;
    try {
        doHeap();
    } catch(int i) {
        std::cout << "예외 발생 " << std::endl;
    }
    return 0;
}