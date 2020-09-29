#include <stdio.h>

typedef struct _GBList
{
    struct GBList *next;

} GBList;

struct Women
{

    int age;
    GBList list;
};

struct Men
{

    int age;
    GBList list;
};

struct Women * GetWomenNode(GBList *gbl){
  int offset = (int)(&(((struct Women *)0)->list));
    int  headAddress=  (int)(gbl) - offset;
    struct Women *p =headAddress;
    return  p;

}


struct Women *CreateList()
{
    struct Women w1,w2;



    w2.age=850;
  //w2.list.next=NULL;
    w1.age = 762;
    w1.list.next = &w2.list;
    int offset = (int)(&(((struct Women *)0)->list));
    int  headAddress=  (int)(&(w1.list)) - offset;
    struct Women *p =headAddress;


   while (p->list.next!=NULL)
   {
       printf("%d\n",p->age);
   
       p=GetWomenNode(p->list.next);
   }
    return p;  //这里返回p是有问题的，因为上面这些对象都分配在栈上，所以方法执行完，内存就被回收了
}




void  PrintfLinkList(struct Women *p)
{
   if(p==NULL)return;
  
   while (p->list.next!=NULL)
   {
       printf("%d\n",p->age);
   
       p=GetWomenNode(p->list.next);
   }
   
   
};


int main11()
{
   struct Women * p= CreateList();
    //PrintfLinkList(p);
    return 0;
}