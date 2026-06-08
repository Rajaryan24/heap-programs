#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {3,2,1,5,6,4};//kth largest element in an array
    int k = 2;

    priority_queue<int> pq;

    for(int x : nums)
        pq.push(x);

    for(int i = 1; i < k; i++)
        pq.pop();

    cout << pq.top();
}