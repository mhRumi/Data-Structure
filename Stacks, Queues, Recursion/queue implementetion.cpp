#include<bits/stdc++.h>
#define maxi 100
using namespace std;

struct Queue
{
    int top;
    int front_;
    int ara[maxi+1];
};

void enqueue(Queue *s, int data)
{
    if((s -> top +1)%(maxi +1 ) == s->front_)
    {
        cout<<"Queue is full !!!"<<endl;
        return;
    }
    s -> ara[s -> top] = data;
    s -> top = (s -> top + 1) % ( maxi+1 );

}

void dequeue(Queue *s)
{
    if(s -> top  == s -> front_)
        cout<<"Stack is empty"<<endl;

    else
        s ->front_  = (s -> front_+1)%(maxi+1) ;
}
int Front(Queue *s)
{
    if(s -> top != s -> front_)
    {
        int data;
        data = s -> ara[s->front_];
        return data;
    }
    else
        return -555;
}

int main()
{
    Queue queue_;
    queue_.front_ = 0;
    queue_.top = 0;
    enqueue(&queue_, 10);
    enqueue(&queue_, 20);
    enqueue(&queue_, 30);
    enqueue(&queue_, 40);
    enqueue(&queue_, 50);
    int data;
    dequeue(&queue_);
    dequeue(&queue_);
    dequeue(&queue_);

    enqueue(&queue_, 60);
    enqueue(&queue_, 70);
    data = Front(&queue_);
    cout<<data<<endl;
    return 0;
}
