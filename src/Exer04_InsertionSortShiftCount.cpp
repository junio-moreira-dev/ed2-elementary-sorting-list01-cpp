//
// Created by Junio Moreira on 26/08/26.
//

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

typedef long long ll;

class Solution {
public:
    pair<vector<int>, ll> insertionSortShiftCount(vector<int>& nums) {
        int n = nums.size();
        ll shifts = 0;

        for (int i = 1; i < n; ++i) {
            int key = nums[i];
            int j = i - 1;

            while (j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                shifts++;
                j--;
            }
            nums[j + 1] = key;
        }

        return {nums, shifts};
    }
};

int main() {
    Solution solver;

    vector<int> v = {72, 12, 62, 69, 27, 67, 41, 56, 33, 74};
    auto result = solver.insertionSortShiftCount(v);

    cout << "Sorted array: ";
    for (size_t i = 0; i < result.first.size(); ++i) {
        cout << result.first[i] << (i + 1 == result.first.size() ? '\n' : ' ');
    }
    cout << "Total shifts: " << result.second << '\n';

    return 0;
}