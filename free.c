#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
struct node*head,*end,*newnode;
void create(int num)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->link=NULL;
    if(head==NULL)
    {
        head=newnode;
        end=newnode;
    }
    else
    {
        end->link=newnode;
        end=newnode;
    }
}
void display()
{
    struct node*ptr=head;
    while(ptr!=NULL)
    {
        printf("%d - %d\n",ptr->data,ptr->link);
        ptr=ptr->link;
    }
}
int main()
{
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m);
        create(m);
    }
    display();
    return 0;
}
