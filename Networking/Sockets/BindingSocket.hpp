#ifndef BindingSocket_hpp
#define BindingSocket_hpp

#include <stdio.h>
#include "SimpleSocket.hpp"

namespace HDE
{
    class BindingSocket: public SimpleSocket
    {
        private:
            int binding;
        public:
            // Constructor
            BindingSocket(int domain, int service, int protocol, int port, u_long interface);
            // Virtual function from parent
            void connect_to_network(int sock, struct sockaddr_in address);
            // Getters
            int get_binding();
    };
}

#endif /* BindingSocket_hpp */