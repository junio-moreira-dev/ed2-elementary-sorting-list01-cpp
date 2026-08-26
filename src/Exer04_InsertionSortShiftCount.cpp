//
// Created by Junio Moreira on 26/08/26.
// Question 4 - Insertion Sort Shift Count
//

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

#define IOFAST() ios_base::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

// Helper function to print a vector in terminal
void printVector(const vector<int>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << (i + 1 == v.size() ? "" : " ");
    }
    cout << "\n";
}

// 1. PURE LOGIC
pair<vector<int>, ll> insertionSortShiftCount(vector<int> arr) {
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

    return {arr, shifts};
}

// 2. ONLINE JUDGE ADAPTER
void onlineJudge() {
    int n;
    while (cin >> n) {
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        pair<vector<int>, ll> ans = insertionSortShiftCount(arr);
        printVector(ans.first);
        cout << ans.second << "\n";
    }
}

// 3. LOCAL TESTS
void runLocalTests() {
    cout << "=== Question 4 (Insertion Sort Shift Count) ===\n\n";

    // Case 1
    vector<int> arr1 = {72, 12, 62, 69, 27, 67, 41, 56, 33, 74};
    pair<vector<int>, ll> res1 = insertionSortShiftCount(arr1);

    cout << "Case 1:\n";
    cout << "  Input:   "; printVector(arr1);
    cout << "  Sorted:  "; printVector(res1.first);
    cout << "  Shifts:  " << res1.second << "\n";
    cout << "  Status:  " << (res1.second == 20 ? "[PASSED]" : "[FAILED]") << "\n";
}

int main() {
    IOFAST();
    runLocalTests();  // <- local testing mode
    // onlineJudge(); // <- online judge mode

    return 0;
}