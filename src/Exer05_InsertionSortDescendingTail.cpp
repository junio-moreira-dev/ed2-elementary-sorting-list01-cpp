//
// Created by Junio Moreira on 18/08/26.
//

#include <iostream>
#include <vector>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

// TODO: Implement Insertion Sort in descending order building the sorted sublist at the tail
// Iterate from right to left (end towards beginning) inserting elements into the sorted suffix
void insertionSortDescendingTail(vector<int>& arr) {
    int n = arr.size();
    // Implementation goes here
}

int main() {
    FAST_IO;

    int n;
    while (cin >> n) {
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        insertionSortDescendingTail(arr);

        for (int i = 0; i < n; ++i) {
            cout << arr[i] << (i + 1 == n ? '\n' : ' ');
        }
    }

    return 0;
}
