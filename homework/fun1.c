#include"myfun.h"
#define FLAGS O_WRONLY|O_CREAT|O_TRUNC
#define MODES S_IRWXU|S_IXGRP|S_IRGRP|S_IROTH|S_IXOTH
//创建新文件函数定义
int create-1()
{   
    const char *pathname;
    int fd;
    char pn[100];
    printf("please input the pathname <100 strings:\n");
    scanf("%s",pn);
    pathname=pn;
    if((fd=open(pathname,FLAGS,MODES))==-1)
    {
        printf("Error!File open failed! \n");
        exit(255);
    }
    printf("Congratulation!File has been open!\n");
    printf("fd=%d\n",fd);
    return 0;
}

