#ifndef ListenSocket_hpp
#define ListenSocket_hpp

#include <stdio.h>

#include "BindingSocket.hpp"

namespace HDE{

    class ListenSocket : public BindingSocket{
        private:
            int backlog;
            int listening;
        public:
            ListenSocket(int domain, int service, int protocol, int port, unsigned long interface, int backlog);
            void start_listening();
    };

}

#endif