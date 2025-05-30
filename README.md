# To study and implement Queue implementation using array. menu options - i) Insert ii) Delete iii) Display iv) exit 

### Aim 
To study and implement Queue implementation in C++ using array. <br> 
Menu options - <ol><li>Insert</li><li>Delete</li><li>Display</li><li>Exit</li></ol>

### Software 
Visual Studio Code 

### Theory 
<ul><li>A queue is an ordered collection of items where the addition of new items happens at one end, called the "rear" and the removal of exiting items occurs at the other end, commonly called the "front".</li><li>It operates in a <b>first in first out (FIFO)</b> type of arrangement.</li><li>Elements are inserted at the back (end) and are deleted from the front.</li><li>To create a queue, we use the'queue'keyword, and specify the type of values it should store within angle brackets '<>'and then the name of the queue, like: queue< type> queueName.</li></ul>  

<ol><li> To add elements (enqueue) to the queue, we use <b>'.push()'</b> function after declaring the queue. An element is added atthe end of the queue. </li> <li> To remove an element (dequeue) from the queue we use the <b>'.pop()'</b> function. </li> <li><b>'.empty()'</b> function is used to check if the queue is empty or not. </li><li>In a queue, we can only access the element at the front or back, using <b>'.front()'</b> and <b>'.back()'</b> respectively.</li></ol>              

### Code 
(A) 
```
// NAME - NALIN KUMAR SRIVASTAVA
// PRN - 23070123157
// EXPERIMENT - 19(A) 

// QUEUE 

#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void Insert() {
   int val;
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}
```

(B) 
```
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
```

### Output 
(A) 
![](https://github.com/Shloka-Patel/Experiment---19/blob/main/Output_19A.png) 

(B) 
![](https://github.com/Shloka-Patel/Experiment---19/blob/main/Output_19B.png) 

### Conclusion 
Queues provide an effective way to manage ordered data where the first element entered is the first to be processed, making them essential in many real-world applications that involve sequential data handling.
