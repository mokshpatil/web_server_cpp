#ifndef Simple_Socket.hpp
#define Simple_Socket.hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>

namespace HDE{

    class SimpleSocket{

        private:
        int connection;
        struct sockaddr_in address;

        public:
            SimpleSocket(int domain, int service, int protocol, int port, u_long interface);
    };

}

#endif