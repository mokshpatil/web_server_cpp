#include "Server.hpp"

HDE::Server::Server(int domain, int service, int protocol, int port, unsigned long interface, int backlog)
{
    socket = new ListenSocket(domain, service, protocol, port, interface, backlog);
}

HDE::ListenSocket *  HDE::Server::get_socket(){
    return socket;
}