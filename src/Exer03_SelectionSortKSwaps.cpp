//
// Created by Junio Moreira on 26/08/26.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> selectionSortKSwaps(vector<int>& nums, int k) {
        int n = nums.size();
        int swapsDone = 0;

        for (int i = 0; i < n - 1 && swapsDone < k; ++i) {
            int minIdx = i;
            for (int j = i + 1; j < n; ++j) {
                if (nums[j] < nums[minIdx]) {
                    minIdx = j;
                }
            }
            if (minIdx != i) {
                int temp = nums[i];
                nums[i] = nums[minIdx];
                nums[minIdx] = temp;
                swapsDone++;
            }
        }
        return nums;
    }
};

void printVector(const vector<int>& nums) {
    for (size_t i = 0; i < nums.size(); ++i) {
        cout << nums[i] << (i + 1 == nums.size() ? '\n' : ' ');
    }
}

int main() {
    Solution solver;

    vector<int> v1 = {29, 64, 14, 37, 13};
    cout << "After 2 swaps: ";
    printVector(solver.selectionSortKSwaps(v1, 2));

    vector<int> v2 = {64, 25, 12, 22, 11, 90};
    cout << "After 1 swap:  ";
    printVector(solver.selectionSortKSwaps(v2, 1));

    return 0;
}