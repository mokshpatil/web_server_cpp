#ifndef ConnectSocket_hpp
#define ConnectSocket_hpp

#include <stdio.h>

#include "SimpleSocket.hpp"

namespace HDE{

    class ConnectSocket: public SimpleSocket{
        public:
            ConnectSocket(int domain, int service, int protocol, int port, unsigned long interface);
            int socket_network(int sock, struct sockaddr_in address);
            
    };

}

#endif 