all: server client showip telnet_server

server: server.c
	gcc server.c -o server

client: client.c
	gcc client.c -o client

showip: showip.c
	gcc showip.c -o showip

telnet_server: telnet_server.c
	gcc telnet_server.c -o telnet_server

clean: 
	rm -rf *.o showip server client
