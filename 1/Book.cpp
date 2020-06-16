#include "Book.hpp"

Book::Book(std::string name, std::string color)
: mName(name), mColor(color) {}
Book::~Book() {}

std::string Book::getName() 
{
    return mName;
}
std::string Book::getColor() 
{
    return mColor;
}
