#include"my.h"
FILE* openFile(){//打开/创建文件读写文件
	FILE *fp;
	
        fp=fopen("file.dat","w+");
	return fp;
}
int writeFile(FILE* fp){
	char buf[]={"hello world\n"};
        if(fp==NULL){
                perror("failed to open file!\n");
                return -1;
        }
	printf("open file success.\n");
	int count = strlen(buf);
	fwrite(buf,count,1,fp);
	return 0;
}
