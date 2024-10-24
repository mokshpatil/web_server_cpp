#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

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
            SimpleSocket(int domain, int service, int protocol, int port, unsigned long interface);
            virtual int socket_network(int sock, struct sockaddr_in address)=0;
            void test_connection(int);
            struct sockaddr_in get_address();
            int get_socket();
            int get_connection();
            void set_connection(int);
    };

}

#endif