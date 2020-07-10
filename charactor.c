#include <stdio.h>
int main1(){


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

char  dd[3]="123";//c语言中没有字符串这种数据类型,字符串都是通过字符数组来体现的
printf("%s",dd);
return 0;

}

