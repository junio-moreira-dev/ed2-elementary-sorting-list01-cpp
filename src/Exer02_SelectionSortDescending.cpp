//
// Created by Junio Moreira on 18/08/26.
//

#include <iostream>
#include <vector>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

// TODO: Implement Selection Sort to sort array in descending order
// Select the largest element from the unsorted region and place it at the beginning
void selectionSortDescending(vector<int>& arr) {
    int n = arr.size();
    // Implementation goes here (use a temp variable for swapping)
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