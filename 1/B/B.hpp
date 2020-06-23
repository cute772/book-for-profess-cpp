#include <iostream>
#include <boost/asio.hpp>

class B
{
    int* data;

    public:
        B();
        ~B();
        std::string getName();
        std::string getAddress();
        void some();
        void doSomething();
        void thrower();
        
    private:
        std::string mName;
        std::string mAddress;
        int mNo;
};