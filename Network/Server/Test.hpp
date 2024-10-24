#ifndef Test_hpp
#define Test_hpp

#include <stdio.h>
#include "Server.hpp"

namespace HDE{
    class Test: public Server{
        private:
            char buffer[30000] = {0};
            int new_socket;
            void accept_socket();
            void handle_socket();
            void respond_socket();
        public:
            Test();
            void start_server();
    };
}

#endif