all: server client showip

server: server.c
	gcc server.c -o server

client: client.c
	gcc client.c -o client

showip: showip.c
	gcc showip.c -o showip

clean: 
	rm -rf *.o showip server client
