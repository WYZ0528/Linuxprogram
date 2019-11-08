#include<stdio.h>
#include<stdlib.h>
#include"myfun.h"
int main()
{
    int choice;
    printf("******************************\n");
    printf("0. 退出\n");
    printf("1. 创建新文件\n");
    printf("2. 写文件\n");
    printf("3. 读文件\n");
    printf("4. 修改文件权限\n");
    printf("5. 查看当前文件的权限修改文件权限\n");
    printf("******************************\n");
    scanf("请输入你的选择(Please input your choice): %d\n",&choice);
    switch(choice)
    {
	case 1:
	    create-1();
	    break;
	case 2:
	    write-1();
	    break;
	case 3:
	    read-1();
	    break;
	case 4:
	    change-1();
	    break;
	case 5:
	    check-1();
	    break;
	default:break;
    }
    return 0;
}






