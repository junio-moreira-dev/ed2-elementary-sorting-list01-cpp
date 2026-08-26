//
// Created by Junio Moreira on 26/08/26.
// Question 2 - Selection Sort Descending
//

#include <iostream>
#include <vector>

using namespace std;

#define IOFAST() ios_base::sync_with_stdio(0); cin.tie(0);

// Helper function to print a vector in terminal
void printVector(const vector<int>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << (i + 1 == v.size() ? "" : " ");
    }
    cout << "\n";
}

// 1. PURE LOGIC
vector<int> selectionSortDescending(vector<int> arr) {
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
    return arr;
}

// 2. ONLINE JUDGE ADAPTER
void onlineJudge() {
    int n;
    while (cin >> n) {
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        vector<int> ans = selectionSortDescending(arr);
        printVector(ans);
    }
}

// 3. LOCAL TESTS
void runLocalTests() {
    cout << "=== Question 2 (Selection Sort Descending) ===\n\n";

    // Case 1
    vector<int> arr1 = {3, 1, 4, 5, 2};
    vector<int> exp1 = {5, 4, 3, 2, 1};
    vector<int> res1 = selectionSortDescending(arr1);
    cout << "Case 1:\n";
    cout << "  Input:    "; printVector(arr1);
    cout << "  Expected: "; printVector(exp1);
    cout << "  Actual:   "; printVector(res1);
    cout << "  Status:   " << (res1 == exp1 ? "[PASSED]" : "[FAILED]") << "\n\n";

    // Case 2
    vector<int> arr2 = {10, 20, 5, 8, 12, 15};
    vector<int> exp2 = {20, 15, 12, 10, 8, 5};
    vector<int> res2 = selectionSortDescending(arr2);
    cout << "Case 2:\n";
    cout << "  Input:    "; printVector(arr2);
    cout << "  Expected: "; printVector(exp2);
    cout << "  Actual:   "; printVector(res2);
    cout << "  Status:   " << (res2 == exp2 ? "[PASSED]" : "[FAILED]") << "\n";
}

int main() {
    IOFAST();
    runLocalTests();  // <- local testing mode
    // onlineJudge(); // <- online judge mode

    return 0;
}