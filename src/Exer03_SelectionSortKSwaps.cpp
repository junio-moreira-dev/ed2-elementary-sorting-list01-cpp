//
// Created by Junio Moreira on 18/08/26.
//

#include <iostream>
#include <vector>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

// TODO: Simulate standard Selection Sort (ascending) for exactly k swaps
// Stop swapping once k swaps are performed
void selectionSortKSwaps(vector<int>& arr, int k) {
    int n = arr.size();
    // Implementation goes here
}

int main() {
    FAST_IO;

    int n, k;
    while (cin >> n >> k) {
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        selectionSortKSwaps(arr, k);

        for (int i = 0; i < n; ++i) {
            cout << arr[i] << (i + 1 == n ? '\n' : ' ');
        }
    }

    return 0;
}