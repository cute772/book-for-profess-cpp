#include <iostream>
#include <boost/asio.hpp>

class A 
{
    int* data;

    public:
        A(std::string name, std::string address);
        A();
        ~A();
        std::string getName();
        std::string getAddress();
        void some();
    private:
        std::string mName;
        std::string mAddress;
        int mNo;
        
        boost::asio::io_service mIos;
};