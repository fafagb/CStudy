#include <stdio.h>

int main()
{
#pragma region   字符数组和字符串常量（字符串常量是常量字符数组）
char s1[] = "123";//s1[1],*(s1+1)  //pc1所指向的123分配在静态数据区的data段（数据内容不可修改）
char s2[] = "123";
char s3[] = "456";
char *pc1 = "123";//pc1[1],*(pc1+1)  // 字符串数组123分配在栈上（数据内容可修改）
// printf("s1=%d\n",&s1);
// printf("s2=%d\n",&s2);
// printf("s3=%d\n",&s3);
// printf("pc1=%d\n",pc1);
printf("s1[1]=%c\n",s1[1]);
printf("*(s1+1)=%c\n",*(s1+1));
printf("pc1[1]=%c\n",pc1[1]);
printf("*(pc1+1)=%c\n",*(pc1+1));
#pragma endregion

#pragma region 字符
// char  c="adsf"; //错误，char是字符类型
// printf("%c",c);
// printf("%s",c);

// char  cc="a";//错误写法，char是字符类型
// printf("%c",cc);
// printf("%s",cc);

// char  ccc='c';
// printf("%c",ccc);
// printf("%d",ccc);
//printf("%s",ccc);//字符不能转化成字符串输出
#pragma endregion

#pragma region 字符串 这个编译器没有自动截断最后一个元素替换成\0，所以下面手动留了最后一个位置让编译器填充\0

    //c语言中没有字符串这种数据类型,我们想要的字符串都是通过字符数组来实现的
    char dd[3] = "12"; //直接初始化数组  char  dd[3]="123";错误应该留一个给\0
    //dd="456";  //语法错误
    //dd[3]="456";//语法错误
    //dd[0]="8";//语法错误
    dd[0] = '9'; //改变0元素的值
    printf("%s\n", dd);
    //char ff[4]={'a','b','c','d'};错误：应该留一个给\0
    char ff[4] = {'a', 'b', 'c'};
    printf("%s\n", ff);

    char ee[] = "123";
    printf("%s\n", ee);

    char gg[] = {'a', 'b', 'c', 'd', '\0'};

    printf("%s\n", gg);

    char hh[5];

    for (int i = 0; i < sizeof(hh) - 1; i++)
    {
        hh[i] = 'a' + i;
    }
    printf("%s\n", hh);
#pragma endregion

    return 0;
}
