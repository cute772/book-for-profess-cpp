#include <iostream>
#include "boost/asio.hpp"
#include "boost/thread.hpp"

typedef boost::asio::io_service								NetService;
typedef boost::shared_ptr<NetService> 						NetServicePtr;
typedef boost::shared_ptr<boost::asio::io_service::work> 	NetWorkPtr;
typedef boost::shared_ptr<boost::thread> 					NetThreadPtr;

NetServicePtr	service(new NetService);
NetWorkPtr  	work(new boost::asio::io_service::work(*service));

m_NetServices.push_back(service);
m_NetWorks.push_back(work);


std::vector<NetServicePtr> 	m_NetServices;
std::vector<NetWorkPtr> 	m_NetWorks;
std::vector<NetThreadPtr>	m_NetThreads;


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
        
        std::vector<NetServicePtr> 	m_NetServices;
	    std::vector<NetWorkPtr> 	m_NetWorks;
	    std::vector<NetThreadPtr>	m_NetThreads;
};