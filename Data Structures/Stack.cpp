#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    void push(int x)
    {
        Node *t = new Node;
        if (t == NULL)
            cout << "Stack is full";
        else
        {
            t->data = x;
            t->next = top;
            top = t;
        }
    }

    void pop()
    {
        Node *t = new Node;
        if (top == NULL)
            cout << "Stack is empty";
        else
        {
            t = top;
            top = top->next;
            free(t);
        }
    }

    void display()
    {
        Node *p = new Node;
        p = top;
        while (p)
        {
            cout << p->data << " -> ";
            p = p->next;
        }
    }
};

int main()
{
    Stack st;
    cout << "\nPushing elements in stack...";
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "\nStack:\n";
    st.display();
    cout << "\nPoping one element from stack...";
    st.pop();
    cout << "\nStack:\n";
    st.display();
    return 0;
}