#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    void insert_node(int x, int index);
    void display();
    int Length();
    void delete_node(int pos);
};

int LinkedList ::Length()
{
    Node *p = head;
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

void LinkedList ::insert_node(int x, int index)
{
    Node *p, *t;
    p = new Node();
    p = head;
    t->data = x;
    if (index == 0)
    {
        t->next = head;
        head = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

void LinkedList ::display()
{
    Node *p = head;
    while (p)
    {
        cout << p->data << " -> ";
        p = p->next;
    }
    cout << endl;
}

void LinkedList::delete_node(int pos)
{
    Node *p, *q;

    if (pos == 1)
    {
        p = head;
        head = head->next;
        delete p;
    }
    else
    {
        p = head;
        q = NULL;
        for (int i = 0; i < pos - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        delete p;
    }
}

int main()
{
    LinkedList ll;
    cout << "\nInserting nodes in the linked list...";
    ll.insert_node(1, 0);
    ll.insert_node(2, 1);
    ll.insert_node(3, 2);
    ll.insert_node(4, 3);
    cout << "\nLinked list:" << endl;
    ll.display();
    cout << "\nDeleting one element from 2nd position from linked list...";
    ll.delete_node(2);
    cout << "\nLinked list:" << endl;
    ll.display();
    return 0;
}

/*
int sumL(node *p)
{
    int sum=0;
    while(p!=0)
    {
        sum=sum+p->info;
        p=p->next;
    }
    return sum;
}

int max(node *p)
{
    int m=-32768;
    while(p)
    {
        if(p->info>m)
            m=p->info;
        p=p->next;
    }
    return m;
}

int count(node *p)
{
    int c=0;
    while(p!=0)
    {
        c++;
        p=p->next;
    }
    return c;
}

void create(int A[], int m)
{
    struct node *last,*ptr;
        first=(node *)malloc(sizeof(struct node));
        first->info=A[0];
        first->next=NULL;
        last=first;

        for(int i=1;i<m;i++)
        {
            ptr=(node *)malloc(sizeof(struct node));
            ptr->info=A[i];
            ptr->next=NULL;
            last->next=ptr;
            last=ptr;
        }
}

node *search(node *p,int x)
{
    while(p!=NULL)
    {
        if(x==p->info)
            return p;

        p=p->next;
    }
    return NULL;
}

void insert(node *p,int index,int x)
{
    node *t;
    if(index < 0 || index > count(p))
        return;
    t=(struct node *)malloc(sizeof(struct node));
    t->info=x;

    if(index == 0)
    {
        t->next=first;
        first=t;
    }
    else
    {
        for(int i=0;i<index-1;i++)
        p=p->next;
        t->next=p->next;
        p->next=t;

    }
}

int Delete(node *p,int index)
{
    struct node *q=NULL;
    int x=-1,i;

    if(index < 1 || index > count(p))
    return -1;

    if(index==1)
    {
        q=first;
        x=first->info;
        first=first->next;
        free(q);
    }

    else
    {
        for(i=0;i<index-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->info;
        free(p);
    }
}

int isSorted(struct node *p)
{
    int x=-65536;

    while(p!=NULL)
    {
        if(p->info< x)
        return 0;
        x=p->info;
        p=p->next;
    }
    return 1;
}
*/