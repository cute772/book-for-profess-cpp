#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "A.hpp"


A::A(std::string name, std::string address) : mName(name), mAddress(address) 
{
    std::cout << "A 클래스 생성" <<  std::endl;
}

A::~A() 
{
    std::cout << "A 클래스 반납" << std::endl;
}

std::string A::getName() 
{
    return mName;
}

std::string A::getAddress()
{
    return mAddress;
}