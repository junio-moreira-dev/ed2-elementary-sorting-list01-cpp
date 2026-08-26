//
// Created by Junio Moreira on 18/08/26.
//

#include <iostream>
#include <string>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

// TODO: Implement Bubble Sort to sort characters of string S in ascending order
void bubbleSortString(string &s) {
    int n = s.size();
    // Implementation goes here
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