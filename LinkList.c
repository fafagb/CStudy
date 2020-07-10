#include <stdio.h>

typedef struct Person
{

    char *p;
    int age;
    char c[10];

    struct Person *next;
} SList;

SList *Create_List()
{

    int data = 0;
    SList *pHead = NULL, *pM = NULL, *pCurrent = NULL;
    char c = '0';
    pHead = (SList *)malloc(sizeof(SList));
    pHead->age = 0;
    pHead->p = &c;
    pHead->c[10] = "123";
    pHead->next = NULL;
    pCurrent = pHead;

    printf("请添加链表元素输入-1退出");
    scanf("%d", &data);
    while (data != -1)
    {
        pM = (char *)malloc(sizeof(SList));
        pM->age = data;
        pM->next = NULL;

        pCurrent->next = pM;

        pCurrent = pM;

        printf("请添加链表元素输入-1退出");
        scanf("%d", &data);
    }
    return pHead;
}

int SList_Printf(SList *p)
{

    SList *pCurr = NULL;

    pCurr = p->next;
    while (pCurr != NULL)
    {
        printf("%d\n", pCurr->age);
        pCurr = pCurr->next;
    }

    return 0;
}

int SList_NodeInsert(SList *pHead, int x, int y)
{
    SList *pCurr = NULL, *pInsert = NULL, *pBehind = NULL;
    pCurr = pHead->next;
    pInsert = (SList *)malloc(sizeof(SList));
    pInsert->age = y;
    int  xisexsit=0;
    while (pCurr)
    {
        if (pCurr->age == x)
        {
            xisexsit=1;
            break;
        }
        pCurr = pCurr->next;
        /* code */
    }
    if(xisexsit){
   pBehind = pCurr->next;
    
    pCurr->next = pInsert;
    pInsert->next = pBehind;

    }
 

    return 0;
}




int main()
{

    SList *pHead = Create_List();

    SList_Printf(pHead);

    SList_NodeInsert(pHead, 6, 9);

    SList_Printf(pHead);
    return 0;
}