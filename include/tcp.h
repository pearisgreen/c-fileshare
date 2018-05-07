#ifndef TCP_H
#define TCP_H

#include <stdint.h>

int host_connection(int *m_socket, int *c_socket, char *port);

int connect_to_host(int *c_socket, char *ip6, char *port);

int send_file(int s, char *url, uint8_t *key);

int recv_file(int s, char *url, uint8_t *key);

#endif

