#include "Book.hpp"

Book::Book(std::string name, std::string color)
: mName(name), mColor(color) 
{
    std::cout << "Book 생성 " << std::endl;
}

Book::~Book() 
{
    std::cout << "Book 소멸 " << std::endl;
}

std::string Book::getName() 
{
    return mName;
}
std::string Book::getColor() 
{
    return mColor;
}
