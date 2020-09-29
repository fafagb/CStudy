#include <stdio.h>

int main()
{

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
