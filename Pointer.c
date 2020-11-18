#include <stdio.h>

void AAA(int *p)
{

    *p = 10;
}

void BBB(int **p)
{

    **p = 20;
}

int main0()
{

    int i = 0;
    int *p = NULL;
    p = &i;
    *p = 5;
    printf("i=%d\n", i);

    AAA(&i);
    printf("i=%d\n", i);

    BBB(&p);
    printf("i=%d", i);
    return 0;
}

void CCC(char **p)
{

    char *temp = NULL;
    temp = (char *)malloc(100);
    *p = temp;
}

// int main1()
// {

//     char *p = NULL;
//     char **p1 = NULL;
//     p = 0x11;
//     p1 = &p;
//     *p1 = 0x22;
//     printf("p=%x\n", p);
//     CCC(&p);
//     printf("p=%x\n", p);
//     return 0;
// }

void DDD(char *p)
{
    char *temp = NULL;
    temp = (char *)malloc(100);
    *p = temp;
}

int main2(){
char   * p=NULL;
char   *p1=NULL;
p=0x11;
p1=&p;
*p1=0x22;
printf("p=%x\n",p);
DDD(&p);
printf("p=%x\n",p);
return 0;
}

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




//C语言中return返回值的机制为将返回值存入eax寄存器中，然后系统再将eax中的值赋给接收变量
//在main()函数调用add()或者int_2_str()时，在main()函数的stack frame中会有一个位置用于存储add()或者int_2_str()的返回值。所以说，不管这是什么函数，我们一定会得到返回的值，只是对于int_2_str()来说，因为这个值是int_2_str()的stack中的地址，int_2_str()返回后这个地址的内容就无效了，因此这么做会有警告。
int add(int a, int b) {
  int c = a+b;
  return c;
}

int mainyy(int argc, char ** argv) {
  int a = add(1, 2);
  printf("%d\n", a);
  return 0;
}


char *int_2_str(int value) {
  char buf[20];
  sprintf(buf, "%d", value);
  return buf;
}

int main(int argc, char ** argv) {
  char *buf = int_2_str(1024);
  printf("%s", buf);
  return 0;
}



//主调函数分配内存， 就是输入。

          void func1(char *p) //p是主调函数分配好内存传入
           {
                  char buf[] = "1254566";
                  strcpy(p, buf);
            }

        // 被调函数分配内存， 就是输出。

           void func2(char **out)  //out是被掉函数分配好内存， 并修改内容后传出
          {
                 char *tmp = (char *)malloc(64);
                 strcpy(tmp, "xxxxyyyy");
                 *out = tmp;
          }

 

          // 测试程序

         

           void test()
           {
                      char *p = malloc(32);
                      func1(p);
                      printf("%s\n", p);
                      char *p2 = NULL;
                      func2(&p2);
                      printf("%s\n", p2);

                  

                     free(p);
                     free(p2);
                     p = NULL;
                     p2 = NULL;
            }

