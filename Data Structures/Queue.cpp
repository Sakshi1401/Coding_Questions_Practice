#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Queue
{
    Node *head, *last;

public:
    Queue()
    {
        head = last = NULL;
    }

    void enqueue(int x)
    {
        Node *p = new Node;

        if (p == NULL)
            cout << "Queue is full";
        else
        {
            p->data = x;
            p->next = NULL;
            if (head == NULL)
                head = last = p;
            else
            {
                last->next = p;
                last = p;
            }
        }
    }

    void dequeue()
    {
        Node *p = new Node;
        if (head == NULL)
            cout << "Queue is empty";
        else
        {
            p = head;
            head = head->next;
            delete p;
        }
    }

    void display()
    {
        Node *p = head;

        while (p)
        {
            cout << p->data << " -> ";
            p = p->next;
        }
    }
};

int main()
{

    Queue q;
    cout << "\nInserting elements in queue...";
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout << "\nQueue:" << endl;
    q.display();
    cout << "\nDeleting one element from the queue...";
    q.dequeue();
    cout << "\nQueue:" << endl;
    q.display();

    return 0;
}