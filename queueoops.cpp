#include<bits/stdc++.h>
using namespace std;
class Queue{
    private:
     int front=-1,rear=-1,a[100];
    public:
    Queue() : front(-1) {}
    
    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear== 99;
    }
    void enqueue(int x)
    {
        front=0;
        a[rear++]=x;
    }
    int dequeue()
    {
        if(front==-1) return -1;
        if(front==rear) front=rear=-1;
        int x=a[front];
        front++;
        return x;
    }
    int display()
    {
        if(front==-1) return -1;
        for(int i=front;i<rear;i++)
        {
            cout<<a[i]<<" ";
        }
    }


};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.display();



}