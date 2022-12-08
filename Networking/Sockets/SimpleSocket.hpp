#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

namespace HDE
{
    class SimpleSocket
    {
        private:
            struct sockaddr_in address;
            int sock;
            virtual void connect_to_network(int sock, struct sockaddr_in address) = 0;
        public:
            // Constructor
            SimpleSocket(int domain, int service, int protocol, int port, u_long interface);
            // Virtual function to connect to a network
            // Test sockets and connections
            void test_connection(int);
            // Getter functions
            int get_sock();
            struct sockaddr_in get_address();
    };
}

#endif /* SimpleSocket_hpp */