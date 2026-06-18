#include<iostream>
using namespace std;

class Queue {
private:
    int arr[100];
    int front, rear;
public:
    Queue() {
        front = rear = -1;
    }
    // Enqueue operation
    void enqueue(int x) {
        if (rear == 99) {
            cout << "Queue overflow" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        arr[++rear] = x;
    }
    // Dequeue operation
    int dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue underflow" << endl;
            return -1; // Return -1 to indicate queue is empty
        }
        return arr[front++];
    }
    // Front element
    void peek() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Front element: " << arr[front] << endl;
    }
    // Display queue elements
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void clear() {
        front = rear = -1;
    }
    
};

int main() {
    Queue queue;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);

    cout << "Dequeued element: " << queue.dequeue() << endl;
    cout << "Dequeued element: " << queue.dequeue() << endl;
    queue.peek();
    queue.display();
    queue.clear();
    return 0;
}