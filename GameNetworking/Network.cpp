#include "Network.h"
#include<WinSock2.h>


Network::Network(void) {
	m_sockaddr.sin_family = AF_INET;
	m_sockaddr.sin_addr.s_addr = INADDR_ANY;
	m_sockaddr.sin_port = htons(DEFAULT_PORT);
}

Network::Network(string ip,unsigned short port) {
	m_sockaddr.sin_family = AF_INET;
	m_sockaddr.sin_addr.S_un.S_addr = inet_addr(ip.c_str());
	m_sockaddr.sin_port = htons(port);
}

Network::Network(unsigned short port) {
	m_sockaddr.sin_family = AF_INET;
	m_sockaddr.sin_addr.s_addr = INADDR_ANY;
	m_sockaddr.sin_port = htons(port);
}

Network::Network(struct sockaddr_in si){
	m_sockaddr.sin_family = AF_INET;
	m_sockaddr.sin_addr = si.sin_addr;
	m_sockaddr.sin_port = si.sin_port;
}



Network::~Network(void) {

}
