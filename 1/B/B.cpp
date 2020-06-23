#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "B.hpp"


B::B()
{
    data = new int[100];

    mName = "default name";
    mAddress = "default Address";
    //data = new int[100];

    std::cout << "B 클래스 생성" <<  std::endl;
    std::cout << "자원을 획득함!" <<  std::endl;
}

B::~B()
{
    std::cout << "B 클래스 반납" << std::endl;
    std::cout << "자원을 해제함!" << std::endl;
    delete[] data;
}

std::string B::getName() 
{
    return mName;
}

std::string B::getAddress()
{
    return mAddress;
}

void B::some() { std::cout << "일반 포인터와 동일하게 사용가능!" << std::endl; }

void B::doSomething() 
{
    //B* pb = new B();
    thrower();
    delete[] data;
    //std::unique_ptr<B> pa(new B());
}

void B::thrower() 
{
    throw 1;
}