#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    manages elements based on their priority. By default, it operates as a max-heap, meaning the largest element has the highest priority and is always at the top. It is implemented internally using a heap data structure on an underlying container, typically a std::vector.
Key Characteristics
Header File: Must include <queue>.
Order: Elements are not stored in a linear fashion (FIFO like a regular queue), but based on priority. The highest priority element is always readily accessible.
Time Complexity: Operations like insertion (push()) and removal (pop()) have a time complexity of O(log n), while accessing the top element (top()), checking size (size()), and checking if empty (empty()) are O(1).
Declaration and Usage
Max-Heap (Default Behavior)
This is the default configuration, where the element with the highest value is the top element.
    */

    priority_queue<int> pq; // Max Heap

    pq.push(10);
    pq.push(5);
    pq.push(20);

    // Largest element first
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    // to set the priority to min-to-max
    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(10);
    pq1.push(5);
    pq1.push(20);

    while (!pq1.empty())
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout << endl;
    // by default string priority queue is set to max-to-min by number of alphabates
    priority_queue<string> pq2; // Max heap (lexicographically largest first)

    pq2.push("banana");
    pq2.push("apple");
    pq2.push("orange");

    while (!pq2.empty())
    {
        cout << pq2.top() << " ";
        pq2.pop();
    }
    cout << endl;
    // to set the priority to min-to-max

    priority_queue<string, vector<string>, greater<string>> pq3;

    pq3.push("banana");
    pq3.push("apple");
    pq3.push("orange");

    while (!pq3.empty())
    {
        cout << pq3.top() << " ";
        pq3.pop();
    }
    cout << endl;
}