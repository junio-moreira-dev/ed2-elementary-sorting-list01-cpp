//
// Created by Junio Moreira on 26/08/26.
//

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string sortString(string s) {
        int n = s.size();
        for (int i = 0; i < n - 1; ++i) {
            bool swapped = false;
            for (int j = 0; j < n - 1 - i; ++j) {
                if (s[j] > s[j + 1]) {
                    char temp = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = temp;
                    swapped = true;
                }
            }
            if (!swapped) {
                break;
            }
        }
        return s;
    }
};

int main() {
    Solution solver;

    string s1 = "estrutura";
    cout << "Input:  " << s1 << "\n";
    cout << "Output: " << solver.sortString(s1) << "\n\n";

    string s2 = "patrocinio";
    cout << "Input:  " << s2 << "\n";
    cout << "Output: " << solver.sortString(s2) << "\n";

    return 0;
}