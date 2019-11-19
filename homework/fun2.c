#include"myfun.h"
#define FLAGS O_WRONLY|O_CREAT|O_TRUNC
#define MODES S_IRWXU|S_IXGRP|S_IRGRP|S_IROTH|S_IXOTH
//文件写入函数定义
void write-1()
{
    const char *pathname;
    int fd;
    char pn[100];
    char ms[1024];
    printf("请输入您想要写入的文件名:\n");
    scanf("%s",pn);
    pathname=pn;
    if((fd=open(pathname,FLAGS,MODES))==-1)
    {
        printf("Error!File write fail! \n");
        exit(0);
    }
    memset(ms,0x00,sizeof(char)*1024);
    printf("确认文件打开/创建成功，请输入您想要写入的内容!:\n");
    scanf("%s",ms);
    write(fd,ms,sizeof(ms));
    close(fd);
    printf("文件写入操作成功！(按任意键回到主菜单)\n");
    getchar();
    getchar();
}
