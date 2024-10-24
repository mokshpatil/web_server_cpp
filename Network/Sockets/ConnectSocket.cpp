#include "ConnectSocket.hpp"

HDE::ConnectSocket::ConnectSocket(int domain, int service, int protocol, int port, u_long interface) : SimpleSocket(domain, service, protocol, port, interface)
{
    set_connection(socket_network(get_socket(), get_address()));
    test_connection(get_connection());
}

int HDE::ConnectSocket::socket_network(int sock, struct sockaddr_in address){
    return connect(sock, (struct sockaddr *)&address, sizeof(address));
}