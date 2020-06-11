#include <stdio.h>



void AAA(int *p){

     *p=10;
}


int main()
{

    int i = 0;
    int*  p=NULL;
    p=&i;
    *p=5;   
    printf("i=%d\n",i);



    AAA(&i);
     printf("i=%d",i);


    return 0;
}