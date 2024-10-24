#include "BindingSocket.hpp"

HDE::BindingSocket::BindingSocket(int domain, int service, int protocol, int port, unsigned long interface) : SimpleSocket(domain, service, protocol, port, interface)
{
    set_connection(socket_network(get_socket(), get_address()));
    test_connection(get_connection());
}

int HDE::BindingSocket::socket_network(int sock, struct sockaddr_in address){
    return bind(sock, (struct sockaddr *)&address, sizeof(address));
}