#include"staticlib.h"
#include<stdio.h>
int main()
{
    int num[5];
    initarray(num,5);
    showarray(num,5);
    printf("The Sum of the array is %4d\n",sum(num,5));
    printf("The Max of the array is %4d\n", max(num,5));
    return 0;
}
