#ifndef Server_hpp
#define Server_hpp

#include <stdio.h>
#include <unistd.h>
#include "../Core-Network.hpp"
#include "../Sockets/ListenSocket.hpp"

namespace HDE{
    class Server{
        private:
            ListenSocket * socket;
            virtual void accept_socket() = 0;
            virtual void handle_socket() = 0;
            virtual void respond_socket() = 0;
        public:
            Server(int domain, int service, int protocol, int port, unsigned long interface, int backlog);
            virtual void start_server() = 0;
            ListenSocket * get_socket();
    };
}

#endif