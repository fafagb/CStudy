#include <stdio.h>

typedef struct _Person
{

    int age;
    char c;
    char arr[10];
    struct Person *next;

} Person;

Person *CreateLinkList()
{
    Person *pHead = NULL, *pCurrent = NULL, *pM = NULL;
    pHead = (Person *)malloc(sizeof(Person));
    pHead->age = 0;
    pHead->arr[8] = "123";
    pHead->c = 'a';
    pHead->next = NULL;
    pCurrent = pHead;
    int data = 0;
    printf("请输入链表元素-1退出");
    scanf("%d", &data);
    while (data != -1)
    {
        pM = (Person *)malloc(sizeof(Person));
        pM->age = data;
        pM->next = NULL;
        pCurrent->next = pM;
        pCurrent = pM;
        printf("请输入链表元素-1退出");
        scanf("%d", &data);
    }

    return pHead;
}

void PrintfLinkList(Person *p)
{

    
    if (p == NULL)
        return;
        Person *  pCurr=p;
    while (pCurr != NULL)
    {
        printf("%d\n", pCurr->age);
        pCurr = pCurr->next;
    }
}

Person * DeleteLinkList(Person *p, int x)
{

    if (p == NULL)
        return;
    Person *pPre = NULL, *pCurr = p;
    while (pCurr != NULL)
    {
        if (pCurr->age == x)
        {

            pPre->next = pCurr->next;
        }
        pPre = pCurr;
        pCurr = pCurr->next;
    }

    return p;
}

int mainL()
{
    Person p;//分配在栈上
    p.age = 1;

    printf("%d\n", &p.age);
     printf("%d\n", &p.c);
    p.arr[0]='a';
     p.arr[1]='b';
    printf("%s\n", p.arr);//要想输出ab必须先给数组第零个元素先赋值再给第一个元素赋值
    // printf("%d\n", p.age);
    // printf("%d\n", sizeof(p));

    // Person *p = CreateLinkList();
    // PrintfLinkList(p);
    // DeleteLinkList(p,6);
    // PrintfLinkList(p);
    return 0;
}