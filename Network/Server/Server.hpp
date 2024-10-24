#ifndef Server_hpp
#define Server_hpp

#include <stdio.h>
#include "../Core-Network.hpp"

namespace HDE{
    class Server{
        private:
            ListenSocket * socket;
            virtual void accept() = 0;
            virtual void handle() = 0;
            virtual void respond() = 0;
        public:
            Server(int domain, int service, int protocol, int port, u_long interface, int backlog);
            virtual void start() = 0;
            ListenSocket * get_socket();
    };
}

#endif