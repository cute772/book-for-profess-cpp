#include <iostream>
#include "Book.hpp"

int main()
{
    Book a("myBook", "blue");
    std::string myBookColor = a.getColor();
    std::cout <<  "book class test" << std::endl;
    std::cout <<  "getColor : " << myBookColor << std::endl;


    Book b("hash Book", "red");
    std::string yourBookColor = b.getColor();
    std::cout <<  "book class test" << std::endl;
    std::cout <<  "getColor : " << yourBookColor << std::endl;

    return 0;
}