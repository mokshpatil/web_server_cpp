#include "BindingSocket.hpp"

HDE::BindingSocket:BindingSocket()

int HDE::BindingSocket::connect_socket(int sock, struct sockaddr_in address){
    return bind(sock, (struct sockaddr *)&address, sizeof(address));
}