//
// Created by Junio Moreira on 26/08/26.
//

#include <iostream>
#include <vector>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

void selectionSortDescending(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int maxIdx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }
        if (maxIdx != i) {
            int temp = arr[i];
            arr[i] = arr[maxIdx];
            arr[maxIdx] = temp;
        }
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

        selectionSortDescending(arr);

        for (int i = 0; i < n; ++i) {
            cout << arr[i] << (i + 1 == n ? '\n' : ' ');
        }
    }

    return 0;
}