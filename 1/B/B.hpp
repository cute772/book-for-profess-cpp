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
        std::string getPublicName();
        void some();
        void doSomething();
        void thrower();
        std::string publicName;
        
    private:
        std::string mName;
        std::string mAddress;
        int mNo;
};