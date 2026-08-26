//
// Created by Junio Moreira on 26/08/26.
//

#include <iostream>
#include <string>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

void bubbleSortString(string &s) {
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
}

int main() {
    FAST_IO;

    string s;
    while (cin >> s) {
        bubbleSortString(s);
        cout << s << '\n';
    }

    return 0;
}