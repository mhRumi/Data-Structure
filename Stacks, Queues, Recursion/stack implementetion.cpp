#include<bits/stdc++.h>
#define maxi 100
using namespace std;

struct stack_
{
    int top;
    int ara[maxi];
};

void push(stack_ *s, int data)
{
    if(s -> top < 100)
    {
        s -> ara[s->top] = data;
        s -> top = s -> top + 1;
    }
    else
        cout<<"Stack is full !!! "<<endl;
}

void pop(stack_ *s)
{
    if(s -> top >=0)
        s -> top = s -> top -1;
    else
        cout<<"Stack is empty"<<endl;
}

int top(stack_ *s)
{
    if(s -> top >=0)
    {
        int data;
        data = s -> ara[s->top-1];
        return data;
    }
    else
        return -555;
}
int main()
{
    stack_  my_stack;
    int value;
    my_stack . top = 0;
    push(&my_stack, 10);
    push(&my_stack, 100);
    push(&my_stack, 1000);
    value = top(&my_stack);
    cout<<"Before pop top value is: "<<value<<endl;
    pop(&my_stack);
     value = top(&my_stack);
     cout<<"After pop top value is: "<<value<<endl;
    return 0;

}
