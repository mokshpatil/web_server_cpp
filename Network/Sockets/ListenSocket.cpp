#include "ListenSocket.hpp"

HDE::ListenSocket::ListenSocket(int domain, int service, int protocol, int port, unsigned long interface, int backlog) : BindingSocket(domain, service, protocol, port, interface)
{
    backlog = backlog;
    start_listening();
    test_connection(listening);
}

void HDE::ListenSocket::start_listening(){
    listening = listen(get_socket(), backlog);
}