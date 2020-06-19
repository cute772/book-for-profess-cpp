#include <iostream>
#include <boost/asio.hpp>

class A 
{
    public:
        A(std::string name, std::string address);
        ~A();
        std::string getName();
        std::string getAddress();
    private:
        std::string mName;
        std::string mAddress;
        int mNo;
        
        boost::asio::io_service mIos;

};