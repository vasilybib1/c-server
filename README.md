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

