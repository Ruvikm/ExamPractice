#include <iostream>
using namespace std;

const int QueueSize = 5;
class CirQueue{
    int data[QueueSize];
    int front,rear;
    int flag;
    public:
        void EnQueue(int x);
        int DeQueue();
        void Create();
};

void CirQueue :: Create(){
    int data[QueueSize] = {-1};
    rear = front = 0;
    flag = 0;
}

void CirQueue :: EnQueue(int x){
    if(rear == front && flag == 1){
        cout << "队列已满!" << endl;
    }
    else{
        data[rear] = x;
        // cout << "rear:" << rear <<"  x :"<< x << endl;
        rear = (rear + 1) % QueueSize;
        if(rear == front)
            flag = 1;
    }
}

int CirQueue :: DeQueue(){
    if(front == rear && flag == 0){
        cout << "队列已空!" << endl;
        return -1;
    }else{
        front = (front + 1) % QueueSize;
        int num = data[front];
        // cout << "front:" << front <<"  num :"<< num << endl;
        if(front == rear)
            flag = 0;
        return num;
    }
}

int main(){

    CirQueue Queue;
    Queue.Create();
    Queue.DeQueue();
    for(int i = 1 ; i <= 5 ; i++){
        Queue.EnQueue(i);
    }
    for(int i = 1 ; i <= 5 ; i++){
        cout << Queue.DeQueue() << " ";
    }
    cout << endl;
    Queue.DeQueue();
    return 0;
}