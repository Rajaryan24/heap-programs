#include <iostream>
#include <vector>
using namespace std;

bool isMinHeap(vector<int>& arr) {//check if an array represents a min heap or not
    int n = arr.size();

    for(int i = 0; i <= (n - 2) / 2; i++) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if(left < n && arr[i] > arr[left])
            return false;

        if(right < n && arr[i] > arr[right])
            return false;
    }

    return true;
}

int main() {
    vector<int> arr = {2, 5, 20, 10, 15, 25, 30};

    if(isMinHeap(arr))
        cout << "Yes, Min Heap";
    else
        cout << "Not a Min Heap";
}