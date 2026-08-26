//
// Created by Junio Moreira on 26/08/26.
// Question 3 - Selection Sort K Swaps
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
vector<int> selectionSortKSwaps(vector<int> arr, int k) {
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
    return arr;
}

// 2. ONLINE JUDGE ADAPTER
void onlineJudge() {
    int n, k;
    while (cin >> n >> k) {
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        vector<int> ans = selectionSortKSwaps(arr, k);
        printVector(ans);
    }
}

// 3. LOCAL TESTS
void runLocalTests() {
    cout << "=== Question 3 (Selection Sort K Swaps) ===\n\n";

    // Case 1
    vector<int> arr1 = {29, 64, 14, 37, 13};
    int k1 = 2;
    vector<int> exp1 = {13, 14, 64, 37, 29};
    vector<int> res1 = selectionSortKSwaps(arr1, k1);
    cout << "Case 1 (k = 2):\n";
    cout << "  Input:    "; printVector(arr1);
    cout << "  Expected: "; printVector(exp1);
    cout << "  Actual:   "; printVector(res1);
    cout << "  Status:   " << (res1 == exp1 ? "[PASSED]" : "[FAILED]") << "\n\n";

    // Case 2
    vector<int> arr2 = {64, 25, 12, 22, 11, 90};
    int k2 = 1;
    vector<int> exp2 = {11, 25, 12, 22, 64, 90};
    vector<int> res2 = selectionSortKSwaps(arr2, k2);
    cout << "Case 2 (k = 1):\n";
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