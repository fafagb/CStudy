#include <stdio.h>

int main()
{

    int i = 0;
    int*  p=NULL;
    p=&i;
    *p=5;   
    printf("i=%d",i);
    return 0;
}