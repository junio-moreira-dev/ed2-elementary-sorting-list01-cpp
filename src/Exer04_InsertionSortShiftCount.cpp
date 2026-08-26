//
// Created by Junio Moreira on 18/08/26.
//

#include <iostream>
#include <vector>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;

// TODO: Implement Insertion Sort in ascending order and return total shifts performed in the while loop
ll insertionSortShiftCount(vector<int>& arr) {
    int n = arr.size();
    ll shifts = 0;
    // Implementation goes here
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
