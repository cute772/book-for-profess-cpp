#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "A.hpp"


A::A()
{
    std::cout << "A 클래스 생성" <<  std::endl;
    std::cout << "자원을 획득함!" <<  std::endl;

    mName = "default name";
    mAddress = "default Address";
    //data = new int[100];
}

A::A(std::string name, std::string address) : mName(name), mAddress(address) 
{
    std::cout << "A 클래스 생성" <<  std::endl;
}

A::~A() 
{
    std::cout << "A 클래스 반납" << std::endl;
    std::cout << "자원을 해제함!" << std::endl;
    //delete[] data;
}

std::string A::getName() 
{
    return mName;
}

std::string A::getAddress()
{
    return mAddress;
}

void some() { std::cout << "일반 포인터와 동일하게 사용가능!" << std::endl; }

void do_something() {
    std::unique_ptr<A> pa(new A());
    
}