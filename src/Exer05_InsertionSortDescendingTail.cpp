//
// Created by Junio Moreira on 26/08/26.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> insertionSortDescendingTail(vector<int>& nums) {
        int n = nums.size();
        for (int i = n - 2; i >= 0; --i) {
            int key = nums[i];
            int j = i + 1;

            while (j < n && nums[j] > key) {
                nums[j - 1] = nums[j];
                j++;
            }
            nums[j - 1] = key;
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

    vector<int> v1 = {1, 2, 7, 9, 15, 3};
    cout << "Sorted descending 1: ";
    printVector(solver.insertionSortDescendingTail(v1));

    vector<int> v2 = {10, 40, 20, 50, 30};
    cout << "Sorted descending 2: ";
    printVector(solver.insertionSortDescendingTail(v2));

    return 0;
}