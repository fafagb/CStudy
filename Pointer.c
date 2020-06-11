#include <stdio.h>

void AAA(int *p)
{

    *p = 10;
}

void BBB(int **p)
{

    **p = 20;
}

// int main0()
// {

//     int i = 0;
//     int *p = NULL;
//     p = &i;
//     *p = 5;
//     printf("i=%d\n", i);

//     AAA(&i);
//     printf("i=%d\n", i);

//     BBB(&p);
//     printf("i=%d", i);
//     return 0;
// }

void CCC(char** p)
{

    char *temp = NULL;
    temp = (char*) malloc(100);
    *p = temp;
}

int main()
{

    char* p = NULL;
char  **p1=NULL;
p=0x11;
p1=&p;
*p1=0x22;
    printf("p=%x\n", p);
    CCC(&p);
    printf("p=%x\n", p);
    return 0;
}



void DDD(char *p){
char  * temp=NULL;
temp=(char*)malloc(100);
*p=temp;

}

// int main2(){
// char   * p=NULL;
// char   *p1=NULL;
// p=0x11;
// p1=&p;
// *p1=0x22;
// printf("p=%x\n",p);
// DDD(&p);
// printf("p=%x\n",p);
// return 0;
// }




// int main3(){

// int  i=0;
// int *  p=NULL;
// p=&i;
// *p=10;
// printf("p=%d\n",i);
// // error
// // int  *p1=NULL;
// // p1=&p;
// // **p1=20;
// // printf("p=%d\n",i);

// int  **p1=NULL;
// p1=&p;
// **p1=20;
// printf("p=%d\n",i);

// return 0;

// }
