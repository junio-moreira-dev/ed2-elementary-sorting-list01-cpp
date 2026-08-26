//
// Created by Junio Moreira on 26/08/26.
//

#include <iostream>
#include <vector>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;

ll insertionSortShiftCount(vector<int>& arr) {
    int n = arr.size();
    ll shifts = 0;

    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            shifts++;
            j--;
        }
        arr[j + 1] = key;
    }

    return shifts;
}

int main() {
    FAST_IO;

    int n;
    while (cin >> n) {
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        ll totalShifts = insertionSortShiftCount(arr);

        for (int i = 0; i < n; ++i) {
            cout << arr[i] << (i + 1 == n ? '\n' : ' ');
        }
        cout << totalShifts << '\n';
    }

    return 0;
}