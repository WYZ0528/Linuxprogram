#include"myfun.h"
#define FLAGS O_WRONLY|O_CREAT|O_TRUNC
#define MODES S_IRWXU|S_IXGRP|S_IRGRP|S_IROTH|S_IXOTH
//文件写入函数定义
void write-1()
{
    const char *pathname;
    int fd;
    char pn[100];
    printf("请输入您想要写入的文件名:\n");
    scanf("%s",pn);
    pathname=pn;
    if((fd=open(pathname,FLAGS,MODES))==-1)
    {
        printf("Error!File write failed! \n");
        exit(0);
    }
    
}
