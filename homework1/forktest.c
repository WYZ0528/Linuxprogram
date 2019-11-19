#include"my.h"
int main(){
    FILE *fp;
    int status;
    fp = openFile();
    pid_t pid;
	pid = fork();
	if(pid<0){
		perror("fork failed!\n");
		exit(-1);
	}else if(pid==0){
		printf("child:pid=%d.Write in file.dat. Start!\n",getpid());
		writeFile(fp);
		exit(0);
	}else{
		wait(&status);
		printf("parent:pid=%d.Write in file.dat. Start!\n",getpid());
		writeFile(fp);
		return 0;
	}
}
