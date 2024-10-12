#include "Simple_Socket.hpp"

HDE::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interface){
    connection = socket(domain, service, protocol);
    address.sin_port = htons(port);
    address.sin_family = domain;
    address.sin_addr.s_addr = htonl(interface);
}