//
// Created by Juninho Moreira on 18/08/26.
// Question 4 - Shift Counting in Insertion Sort
//

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <utility>

//#include <bits/stdc++.h>

using namespace std;

#define IOFAST() ios_base::sync_with_stdio(0);cin.tie(0);
#define ulli unsigned long long int
#define uli unsigned long int
#define lli long long int

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector< ii > vii;

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define pb push_back
#define mp make_pair
#define pq priority_queue
#define LSONE(s) ((s)&(-s)) //LASTBIT
#define DEG_to_RAD(X)   (X * PI / 180)
#define F first
#define S second
#define PI 2*acos(0)

// Helper function to print vectors in terminal
void printVector(const vector<int>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << (i + 1 == v.size() ? "" : " ");
    }
    cout << "\n";
}

// 1. PURE LOGIC
pair<vector<int>, int> insertionSortCountCopies(vector<int> v) {
    // TODO: Return a pair with {sorted_vector, total_shifts_in_while_loop}
    return {v, 0};
}

// 2. ONLINE JUDGE ADAPTER
void onlineJudge() {
    // TODO: Read inputs and invoke the solution for the online judge
}

// 3. LOCAL TESTS
void runLocalTests() {
    cout << "=== Test Q4 (Shift Counting in Insertion Sort) ===\n\n";

    // --- Case 1 ---
    vector<int> test1 = {72, 12, 62, 69, 27, 67, 41, 56, 33, 74};
    vector<int> expVec = {12, 27, 33, 41, 56, 62, 67, 69, 72, 74};
    int expShifts = 26;

    pair<vector<int>, int> obtained = insertionSortCountCopies(test1);

    cout << "Input:           "; printVector(test1);
    cout << "Expected Array:  "; printVector(expVec);
    cout << "Actual Array:    "; printVector(obtained.first);
    cout << "Expected Shifts: " << expShifts << "\n";
    cout << "Actual Shifts:   " << obtained.second << "\n";

    bool passed = (obtained.first == expVec && obtained.second == expShifts);
    cout << (passed ? "[PASSED]" : "[FAILED]") << "\n";
}

int main() {
    IOFAST();
    runLocalTests();  // <- local testing mode
    // onlineJudge(); // <- online judge mode

    return 0;
}