#include <iostream>
#include <string>
#include <memory>
#include "A.hpp"

// https://modoocode.com/229
// http://tcpschool.com/cpp/cpp_template_smartPointer

// std::shared_ptr 에 대한 설명
// http://egloos.zum.com/sweeper/v/2826435

void thrower() 
{
    throw 1;
}

void doSomething()
{
    A* pa = new A();
    thrower();
    delete pa;
}

int main() {
    std::cout << "program start" << std::endl;
    A one("Kim", "판교");
    std::shared_ptr<A> ptrA(new A("PTR","PC memory"));
    std::cout << "포인터 인스턴스 : " << ptrA->getAddress() << std::endl;
    std::cout << one.getAddress() << std::endl;
    try {
        doSomething();
    } catch(int i) {
        std::cout << "예외 발생 " << std::endl;
    }
    return 0;
}