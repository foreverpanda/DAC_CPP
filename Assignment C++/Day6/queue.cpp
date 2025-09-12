#include <iostream>
#include <queue>
using namespace std;
template <typename T>
class Queue {
    queue<T> q;
public:
    void enqueue(T val) { q.push(val); }
    void dequeue() {
        if (!q.empty()) q.pop();
    }
    T front() {
        return (!q.empty()) ? q.front() : T();
    }
    bool isEmpty() { return q.empty(); }
};
int main() {
    Queue<int> intQ;
    intQ.enqueue(100);
    intQ.enqueue(200);
    cout << "Front Int: " << intQ.front() << endl;
    intQ.dequeue();
    cout << "Front After Dequeue: " << intQ.front() << endl;

    Queue<string> strQ;
    strQ.enqueue("Pandit");
    strQ.enqueue("Deependu");
    cout << "Front String: " << strQ.front() << endl;
}
