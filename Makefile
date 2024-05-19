all: server client showip telnet_server telnet_client

server: server.c
	gcc server.c -o server

client: client.c
	gcc client.c -o client

showip: showip.c
	gcc showip.c -o showip

telnet_server: telnet_server.c
	gcc telnet_server.c -o telnet_server

telnet_client: telnet_client.c
	gcc telnet_client.c -o telnet_client

clean: 
	rm -rf *.o showip server client telnet_server telnet_client
