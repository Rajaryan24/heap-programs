#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;//max heap

    pq.push(10);
    pq.push(30);
    pq.push(20);

    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
}