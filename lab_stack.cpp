#include<iostream>
using namespace std;

#define ERROR -9999
#define MAXSIZE 10

class Stack 
{
    int top;
    int array[MAXSIZE];
    public:
    Stack()
    {
    top = -1;
    }
    void Push(int item);
    int Pop();
    int Peek();

};

void Stack :: Push(int item)
{

    if(top == MAXSIZE - 1)
    {
        cout <<"Stack Overflow !";
        return;
    }

    array[++top] = item;
}

int Stack :: Pop()
{
    if(top == -1)
    {
        cout <<"Stack is Empty";
        return ERROR;
    }

    int ele = array[top--];
    return ele;
}

int Stack :: Peek()
{
        if(top != -1)
        {
            return array[top];
        }
        else
        {
            return ERROR;
        }
}

int main()
{
    Stack S1;
    S1.Push(10);
    S1.Push(20);
    S1.Push(30);
    int v = S1.Pop();
    cout << v << endl;
    int x = S1.Peek();
    cout << x;

    return 0;
}
