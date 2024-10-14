#ifndef Simple_Socket.hpp
#define Simple_Socket.hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

namespace HDE{

    class SimpleSocket{

        private:
        int sock;
        int connection;
        struct sockaddr_in address;

        public:
            SimpleSocket(int domain, int service, int protocol, int port, u_long interface);
            virtual int connect_socket(int sock, struct sockaddr_in address);
            void test_connection(int);
    };

}

#endif