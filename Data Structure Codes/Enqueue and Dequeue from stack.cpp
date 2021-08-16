# include<iostream>
using namespace std;
class Stack
{
    int top;
    public:
    int a[20];  
    Stack()
    {
        top = -1;
    }

void push(int x)
{
    if(top >= 20)
    {
        cout << "out of limit. \n";
    }
    else
    {
        a[++top] = x;
    }
}
int pop()
{
    if(top < 0)
    {
        cout << "out of limit.\n";
    }
    else
    {
        int d = a[top--];
        return d;
    }
}
bool isEmpty()
{
    if(top < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
};
class Queue {
    public:
    Stack S1, S2;
void  enqueue(int x) 
{
    S1.push(x);
    
    cout << "Element Inserted into Queue is: "<<x<<endl;
}
int dequeue() 
{
    int x;
    cout<<"\n";
    while(!S1.isEmpty()) 
    {
        x = S1.pop();
        S2.push(x);
    }
    while(!S2.isEmpty()) 
    {
        x = S2.pop();
        S1.push(x);
    cout<<"After Popping from Stack 1: "<<S1.pop()<<endl;
    }
}
};
int main()
{
    Queue q;
    q.enqueue(20);
    q.enqueue(18);
    q.enqueue(7);
    q.dequeue();
}
