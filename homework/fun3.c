#include "myfun.h"
void read-1( ){
    char pn[100];
    char ms[2048];
    int fd;
    printf("请输入您想要读取内容的文件名:");
    scanf("%s",pn);
    if((fd=open(pn,O_RDONLY,S_IWRITE|S_IREAD))==-1)
    {
       perror("Error!File read fail!");
       exit(1);
    }
    if(read(fd,ms,sizeof(ms))==-1)
    {
       perror("Error!File read fail!");
       exit(1);
    }
    printf("读取成功！,文件内容如下:\n");
    printf("-----------------------------------------------\n");
    printf("%s\n",ms);
    printf("-----------------------------------------------\n");
    close(fd);
    printf("\n\n(按任意键返回主菜单)");
    getchar();
    getchar();
}
