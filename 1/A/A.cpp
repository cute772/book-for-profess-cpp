#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "A.hpp"
#include "boost/asio.hpp"




A::A(std::string name, std::string address) : mName(name), mAddress(address) 
{
    std::cout << "A 클래스 생성" <<  std::endl;
}

A::~A() 
{
    std::cout << "A 클래스 반납" << std::endl;
}

std::string A::getName() 
{
    return mName;
}

std::string A::getAddress()
{
    return mAddress;
}

void A::NetworkServicePool(int nPoolSize)
{
	//m_bRun  		= false; 
	//m_nServiceIndex = 0; 

	m_nPoolSize 			= (nPoolSize*2+1); 
	if(m_nPoolSize < 20) m_nPoolSize = 20; 
		
	m_nPrivateServiceIndex	= 0;

	for(int nIndex = 0 ; nIndex < m_nPoolSize ; nIndex++)
	{
		NetServicePtr	service(new NetService);
		NetWorkPtr  	work(new boost::asio::io_service::work(*service));
		
		m_NetServices.push_back(service);
		m_NetWorks.push_back(work);
	}

	NETWORK_INIT_LOCK(m_ServiceIndexLock);
}


