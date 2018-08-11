## Adding a System Call to Linux Kernel

To add a new system call:

1. Implement your system call, sample code is in this dir.
2. Add your sys call kernel/sys.c.
3. The syscalls has unique sys call sequence number attached to them. You need to retrieve
your system call using this number.
4. This directory has a sample code to test.
5. Before testing you need to compile and build your kernel and boot using it.

#### TODO
1. More instructions writing
2. Error handling
