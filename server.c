#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>

int main(int argc, char *argv[]){
  struct addrinfo hints, *res, *p;
  int status, sockfd, new_fd;
  socklen_t addr_size;
  struct sockaddr_storage their_addr;

  /*
  if(argc != 2){
    fprintf(stderr, "usage: enter a hostname\n");
    return 1;
  }
  */

  memset(&hints, 0, sizeof hints);

  hints.ai_family = AF_UNSPEC;
  hints.ai_socktype = SOCK_STREAM;

  if((status = getaddrinfo(NULL, "3490", &hints, &res)) != 0){
    fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(status));
    return 2;
  }

  if((sockfd = socket(res->ai_family, res->ai_socktype, res->ai_protocol)) == -1){
    perror("socket");
    return 3;
  }

  if(bind(sockfd, res->ai_addr, res->ai_addrlen) == -1){
    perror("bind");
    return 4;
  }

  if(listen(sockfd, 10) == -1){
    perror("listen");
    return 5;
  }

  printf("listening on port 80\n");

  addr_size = sizeof their_addr;
  if((new_fd = accept(sockfd, (struct sockaddr *) &their_addr, &addr_size)) == -1){
    perror("accept");
    return 6;
  }
  
  while(1){
    char buf[20];
    int recieved = recv(new_fd, buf, 20, 0);
    if(recieved == -1){
      perror("recv");
      return 7;
    }
    if(recieved == 0){
      printf("connection closed\n");
      return 0;
    }
    printf("recieved %d - %s\n", recieved, buf);
  }
  
}
