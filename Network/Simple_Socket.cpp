#include "Simple_Socket.hpp"

HDE::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interface){
    
    address.sin_port = htons(port);
    address.sin_family = domain;
    address.sin_addr.s_addr = htonl(interface);
    sock = socket(domain, service, protocol);
    test_connection(sock);
    connection = connect_socket(sock, address);
    test_connection(connection);
}

void HDE::SimpleSocket::test_connection(int testObject){
    if (testObject < 0)
    {
        perror("connection failed");
        exit(EXIT_FAILURE);
        
    }
    
}

struct sockaddr_in HDE::SimpleSocket::get_address(){
    return address;
}

int HDE::SimpleSocket::get_socket(){
    return sock;
}

int HDE::SimpleSocket::get_connection(){
    return connection;
}