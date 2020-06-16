#pragma once
#include <iostream>
#include <string>

class Book
{
    public: 
        Book(std::string name, std::string color);
        ~Book();

        std::string getName();
        std::string getColor();
        
    private:
        std::string mName;
        std::string mColor;
        int mPrice = 0;
};