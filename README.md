# bo
Debian Buffeoverflow example
***
# Requirements
* Debian 4 installed
* gcc
* gdb
* nasm
* ld
* binutils
* python
* execstack

***

# Configurations
##randomize_va_space
In order to run this Demo you have to turn off virtual memory randomization

 	$ echo 0 > /proc/sys/kernel/randomize_va_space
	$ sysctl -p

##ulimit
In order to be able to work with coredumps we need to raise the ulimit

 	$ ulimit -c unlimited

##gcc usage
gcc must be run as follows (execstack has to be installed)

 	$ gcc -fno-stack-protector -z execstack

