//
// Created by Junio Moreira on 26/08/26.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sortArrayDescending(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; ++i) {
            int maxIdx = i;
            for (int j = i + 1; j < n; ++j) {
                if (nums[j] > nums[maxIdx]) {
                    maxIdx = j;
                }
            }
            if (maxIdx != i) {
                int temp = nums[i];
                nums[i] = nums[maxIdx];
                nums[maxIdx] = temp;
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

    vector<int> v1 = {3, 1, 4, 5, 2};
    cout << "Sorted 1: ";
    printVector(solver.sortArrayDescending(v1));

    vector<int> v2 = {10, 20, 5, 8, 12, 15};
    cout << "Sorted 2: ";
    printVector(solver.sortArrayDescending(v2));

    return 0;
}