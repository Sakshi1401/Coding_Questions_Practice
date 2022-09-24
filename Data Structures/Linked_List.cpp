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