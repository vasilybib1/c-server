# C Server

Currently just learning how to use sockets and trying to make a web server in c.

## showip.c

enter hostname after running showip and it will print the ips for that hostname 

```
./showip localhost
```

```
IP address for localhost:
 IPv6: ::1
 IPv4: 127.0.0.1
```


```
./showip google.com
```

```
IP address for google.com:
 IPv6: 2607:f8b0:400a:807::200e
 IPv4: 142.251.33.110
```

## client.c and server.c

current server would open a connection on port 80 and listen on it. client connects to server on port 80 and non stop sends a test message. all of this gets printed 

just the first test to make sure i understand how the sockets work and how to handle the error printing 

## telnet_server.c and telnet_client.c

a test program that sends a `Hello World` if a client tries connecting to the server

sample of telnet_server

```
./telnet_server 
```

```
server: waiting for connections...
server: got connection from ::1
```

sample of the telnet client connection and output 

```
./telnet_client localhost
```

```
client: connecting to ::1
client: recieved 'Hello World!'
```

you can also connect with just telnet given a port number and ip

```
telnet localhost 3490
```

```
Trying ::1...
Connected to localhost.
Escape character is '^]'.
Hello World!Connection closed by foreign host.
```
