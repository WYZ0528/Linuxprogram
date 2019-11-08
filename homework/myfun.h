#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int create-1();
//create创建新文件并打开，如果已有则创建失败;如果没有则创建成功,成功返回文件描述符，否则返回-1
//pathname为文件的相对或绝对路径名
//以上为1.创建新文件的实现方法函数1
ssize_t read-1(int fd,void * buf ,size_t count);
//以上为2.写文件的实现方法函数1
//read()会把参数 fd 所指的文件传送 count 个字节到 buf 指针所指的内存中。
//若参数 count 为0，则 read 返回实际读取到的字节数，如果返回0，表示已到达文件尾或是无可读取的数据，此外文件读写位置会随读取到的字节移动。
//如果顺利read()会返回实际读到的字节数，最好能将返回值与参数count 作比较，若返回的字节数比要求读取的字节数少，则有可能读到了文件尾、从管道(pipe)或终端机读取，或者是read()被信号中断了读取动作。当有错误发生时则返回-1，错误代码存入errno中，而文件读写位置则无法预期。
ssize_t write-1(int fd, const void *buf, size_t nbyte);
//以上为3.读文件的实现方法函数1
//write函数把 buf 中 nbyte 写入文件描述符 handle 所指的文档，成功时返回写的字节数，错误时返回-1.
