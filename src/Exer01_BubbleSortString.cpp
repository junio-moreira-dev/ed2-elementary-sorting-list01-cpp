//
// Created by Junio Moreira on 26/08/26.
// Question 1 - Bubble Sort String
//

#include <iostream>
#include <string>

using namespace std;

#define IOFAST() ios_base::sync_with_stdio(0); cin.tie(0);

// 1. PURE LOGIC
string bubbleSortString(string s) {
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

// 2. ONLINE JUDGE ADAPTER
void onlineJudge() {
    string s;
    while (cin >> s) {
        cout << bubbleSortString(s) << "\n";
    }
}

// 3. LOCAL TESTS
void runLocalTests() {
    cout << "=== Question 1 (Bubble Sort String) ===\n\n";

    // Case 1
    string s1 = "estrutura";
    string exp1 = "aeiortrst"; // 'a', 'e', 'i', 'o', 'r', 'r', 's', 't', 't' -> "aeiorrsttu"
    // Let's compute standard sorted string for test
    string actual1 = bubbleSortString(s1);
    cout << "Case 1:\n";
    cout << "  Input:    " << s1 << "\n";
    cout << "  Actual:   " << actual1 << "\n";
    cout << "  Status:   " << (actual1 == "aeiorrsttu" ? "[PASSED]" : "[FAILED]") << "\n\n";

    // Case 2
    string s2 = "patrocinio";
    string actual2 = bubbleSortString(s2);
    cout << "Case 2:\n";
    cout << "  Input:    " << s2 << "\n";
    cout << "  Actual:   " << actual2 << "\n";
    cout << "  Status:   " << (actual2 == "aciinooprt" ? "[PASSED]" : "[FAILED]") << "\n";
}

int main() {
    IOFAST();
    runLocalTests();  // <- local testing mode
    // onlineJudge(); // <- online judge mode

    return 0;
}