#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    7. Message Queues (Industry-Level)

Examples:

RabbitMQ

Kafka

Amazon SQS

📌 Used in:

Microservices

Distributed systems

Event-driven architectures

Why queue is essential:

Decouples producer & consumer

Handles traffic spikes

Ensures reliability
    */
    // In queue First in First out FIFO
    // queue cannot be initialized directly bcs it does not have constructor to support list
    // Initialize a deque with the desired elements
    std::deque<int> dq = {2, 3, 4, 5, 7, 10};

    // Initialize the queue using the pre-filled deque
    std::queue<int> qu(dq);
    qu.emplace(2);
    qu.emplace(3);
    qu.emplace(4);
    qu.emplace(25);
    qu.emplace(7);
    qu.emplace(9);
    qu.push(10);
    qu.push(5);
    // Create a copy and then pop from the copy so that original queue remains unchanged
    queue<int> temp(qu);

    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // Accessing the front and back elements
    cout << "Front element: " << qu.front() << endl;
    cout << "Back element: " << qu.back() << endl;

    // Removing an element from the front

    // size of queue
    cout << "Size of queue: " << qu.size() << endl;
    // Removing an element from the front
    qu.pop();
    cout << "Size of queue: " << qu.size() << endl;

    cout << "Front element after pop: " << qu.front() << endl;
    // printing elements of the queue while poping from front
    while (!qu.empty())
    {
        cout << qu.front() << " ";
        qu.pop();
    }
    cout << endl;
    cout << "Front element after pop: " << qu.front() << endl;

    //  a queue of strings
    queue<string> cars;

    // Adding elements to the queue
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // Removing the front element (Volvo)
    cars.pop();

    // Access the front element (Now BMW)
    cout << cars.front();
}