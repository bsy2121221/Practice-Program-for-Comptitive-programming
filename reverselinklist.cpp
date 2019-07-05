#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
void append(struct Node** head_ref, struct Node **tail_ref,
            int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

struct Node *reverse(struct Node *head);
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

int main()
{
    int T,n,l;
    cin>>T;
    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for (int i=1; i<=n; i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
       head = reverse(head);
       printList(head);
       cout << endl;
    }
    return 0;
}



int countNode(Node *head)
{
    int c=0;
    while(head!=NULL)
{
    head=head->next;
    c++;
}
return c; 
}
Node* reverse(Node *head)
{
    int count=0,t;
    Node* temp=head;
     Node* p=head;
count=countNode(head);
cout<<count;
 /*if(count%2==1)
 {
     while(count/2+1)
     head=head->next;
     while(count/2)
     {
         t=temp->data;
         temp->data=head->data;
         head->data=t;
     }
     return p;
 }*/
 if(count%2==0)
 {
     while(count/2!=0)
     head=head->next;
     while(count/2!=0)
     {
         t=temp->data;
         temp->data=head->data;
         head->data=t; 
     }
     return p;
 }
}
