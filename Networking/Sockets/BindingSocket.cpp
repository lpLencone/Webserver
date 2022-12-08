#include "BindingSocket.hpp"

// Constructor
HDE::BindingSocket::BindingSocket(int domain, int service, int protocol, int port, u_long interface) : SimpleSocket(domain, service, protocol, port, interface)
{
    connect_to_network(get_sock(), get_address());
    test_connection(binding);
}

// Definition of connect_to_network virtual function
void HDE::BindingSocket::connect_to_network(int sock, struct sockaddr_in address)
{
    binding = bind(sock, (struct sockaddr *)&address, sizeof(address));
}

// Getters
int HDE::BindingSocket::get_binding()
{
    return binding;
}