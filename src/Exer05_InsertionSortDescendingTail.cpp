//
// Created by Junio Moreira on 26/08/26.
//

#include <iostream>
#include <vector>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

void insertionSortDescendingTail(vector<int>& arr) {
    int n = arr.size();
    for (int i = n - 2; i >= 0; --i) {
        int key = arr[i];
        int j = i + 1;

        while (j < n && arr[j] > key) {
            arr[j - 1] = arr[j];
            j++;
        }
        arr[j - 1] = key;
    }
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