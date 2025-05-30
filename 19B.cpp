// NAME - NALIN KUMAR SRIVASTAVA
// PRN - 23070123157
// EXPERIMENT -19(B) 

// QUEUE 

#include <iostream>
using namespace std;
#define size 5
#define ERROR -9999

class Queue {
    int rear, front, arr[size];
public:
    Queue() {
        rear = -1;
        front = -1;
    }
    void enqueue(int);
    int dequeue();
    void disp();
};
void Queue::enqueue(int num) {
    if (rear == size - 1) {
        cout << "Queue is full" << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        arr[++rear] = num;
    }
}
int Queue::dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
        return ERROR;
    } else {
        return arr[front++];
    }
}
void Queue::disp() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    Queue q1;
    q1.enqueue(4);
    q1.enqueue(8);
    q1.enqueue(3);
    q1.disp();
   
    int val = q1.dequeue();
    cout << "Deleted element: " << val << endl;
   
    q1.disp();
   
    return 0;
}

// Output 

// Queue elements: 4 8 3 
// Deleted element: 4
// Queue elements: 8 3  
 
                                                          
