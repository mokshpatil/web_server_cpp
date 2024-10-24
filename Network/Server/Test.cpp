#include "Test.hpp"
#include <sys/socket.h>
#include <netinet/in.h>

HDE::Test::Test() : Server(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY, 10){
    start_server();
}

void HDE::Test::accept_socket(){
    struct sockaddr_in address = get_socket()->get_address();
    socklen_t addrlen = sizeof(address);
    new_socket = accept(get_socket()->get_socket(), (struct sockaddr *)&address, &addrlen);
    if (new_socket < 0) {
        perror("accept failed");
        exit(EXIT_FAILURE);
    }
    read(new_socket, buffer, 30000);
}

void HDE::Test::handle_socket(){
    std::cout << buffer << std::endl;
}

void HDE::Test::respond_socket(){
    char *hello = "Hello World";
    write(new_socket, hello, strlen(hello));
    close(new_socket);
}

void HDE::Test::start_server(){
    int counter = 0;
    while (true)
    {
        std::cout << "=== WAITING ===" << std::endl;
        accept_socket();
        handle_socket();
        respond_socket();
        counter++;
        std::cout << counter << std::endl;
        std::cout << "=== DONE ===" << std::endl;
    }
    
}