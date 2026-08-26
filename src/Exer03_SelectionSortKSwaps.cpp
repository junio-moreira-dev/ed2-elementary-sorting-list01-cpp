//
// Created by Junio Moreira on 26/08/26.
//

#include <iostream>
#include <vector>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

void selectionSortKSwaps(vector<int>& arr, int k) {
    int n = arr.size();
    int swapsDone = 0;

    for (int i = 0; i < n - 1 && swapsDone < k; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
            swapsDone++;
        }
    }
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