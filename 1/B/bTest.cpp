#include <iostream>
#include <string>
#include <memory>
#include "B.hpp"

// https://modoocode.com/229
// http://tcpschool.com/cpp/cpp_template_smartPointer
// https://openmynotepad.tistory.com/33

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
    // 유일하게 사용. 다른 ptr 에 대입 불가
    std::unique_ptr<int> ptrInt(new int);
    std::unique_ptr<int> c = std::move(ptrInt);
    // std::shared_ptr<B> one(new B());
    // std::cout << "ptrB.getAddress(): " << one->getAddress() << std::endl;
    // one->publicName = "testsetset";
    // std::cout << "one publicName: " << std::endl;
    // one->publicName = "cute772 mandoo";
    // std::cout << "one getPublicName(): " << one->getPublicName() << std::endl;
    B mBInstance;
    
    //B one;
    //std::cout << "포인터 인스턴스 : " << ptrA->getAddress() << std::endl;
    //std::cout << one.getAddress() << std::endl;
    try {
        //doHeap();
    } catch(int i) {
        std::cout << "예외 발생 " << std::endl;
    }
    return 0;
}