#include"stdio.h"
#include"stdlib.h"
struct Node
{
    char name[40];
    int age;
    char sex;
    char num[20];
    struct Node *next;
};

int main()
{
    struct Node * head,* p,* tail;
    int i;
    int t=0;
    head=new Node;
    head->next=0;
    tail=head;
    scanf("%s",head->name);
    scanf("%d",&head->age);
    scanf("%s",head->num);
    for(i=0;i<1;i++)
    {
        p=new Node;
        scanf("%s",p->name);
        scanf("%d",&p->age);
        scanf("%s",&p->num);

        p->next=0;
        tail->next=p;
        tail=p;
    }
    p=head;
    while(p)
    {
        t=t+1;
        printf("%d\nName:%s\nAge:%d\nNumber:%s\n",t,p->name,p->age,p->num);
        p=p->next;
    }
    return 0;
    
}
