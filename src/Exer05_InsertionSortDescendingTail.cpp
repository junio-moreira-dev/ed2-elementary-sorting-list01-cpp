//
// Created by Junio Moreira on 26/08/26.
// Question 5 - Insertion Sort Descending Tail
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
vector<int> insertionSortDescendingTail(vector<int> arr) {
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
        vector<int> ans = insertionSortDescendingTail(arr);
        printVector(ans);
    }
}

// 3. LOCAL TESTS
void runLocalTests() {
    cout << "=== Question 5 (Insertion Sort Descending Tail) ===\n\n";

    // Case 1
    vector<int> arr1 = {1, 2, 7, 9, 15, 3};
    vector<int> exp1 = {15, 9, 7, 3, 2, 1};
    vector<int> res1 = insertionSortDescendingTail(arr1);
    cout << "Case 1:\n";
    cout << "  Input:    "; printVector(arr1);
    cout << "  Expected: "; printVector(exp1);
    cout << "  Actual:   "; printVector(res1);
    cout << "  Status:   " << (res1 == exp1 ? "[PASSED]" : "[FAILED]") << "\n\n";

    // Case 2
    vector<int> arr2 = {10, 40, 20, 50, 30};
    vector<int> exp2 = {50, 40, 30, 20, 10};
    vector<int> res2 = insertionSortDescendingTail(arr2);
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