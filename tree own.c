#include<stdio.h>
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;

};
void inorder(struct node *c)
{  if(c!=NULL)
{


    inorder(c->lchild);
    printf("%d ",c->data);
    inorder(c->rchild);
}
}
int main()
{
    struct node *nptr,*root,*t;
    int n,item,i;
    root=NULL;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        nptr=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&item);
        nptr->data=item;
        nptr->lchild=nptr->rchild=NULL;
        if(root==NULL)
        {   t=nptr;
            root=nptr;
        }
        else if(root->data>nptr->data)
        {
            root->lchild=nptr;
            root=root->lchild;
        }
         else if(root->data<nptr->data)
        {
            root->rchild=nptr;
            root=root->rchild;
        }

    }
    //printf("%d ",t->data);
    inorder(t);

}
