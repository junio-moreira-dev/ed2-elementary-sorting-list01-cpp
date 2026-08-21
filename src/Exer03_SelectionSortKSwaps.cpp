//
// Created by Juninho Moreira on 18/08/26.
// Question 3 - Partial Simulation of Selection Sort with k Swaps
//

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

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
    cout << endl;
}

// 1. PURE LOGIC
vector<int> selectionSortKSwaps(vector<int> v, int k) {
    // TODO: Return the vector after performing exactly the first k swaps in Selection Sort
    return v;
}

// 2. ONLINE JUDGE ADAPTER
void onlineJudge() {
    // TODO: Read inputs and invoke the solution for the online judge
}

// 3. LOCAL TESTS
void runLocalTests() {
    cout << "=== Test Q3 (Partial Selection Sort with k Swaps) ===" << endl << endl;

    // --- Case 1 ---
    vector<int> test1 = {29, 64, 14, 37, 13};
    int k1 = 2;
    vector<int> expected1 = {13, 14, 29, 37, 64};
    vector<int> obtained1 = selectionSortKSwaps(test1, k1);

    cout << "Input:           "; printVector(test1);
    cout << "k:               " << k1 << endl;
    cout << "Expected Output: "; printVector(expected1);
    cout << "Actual Output:   "; printVector(obtained1);
    cout << (obtained1 == expected1 ? "[PASSED]" : "[FAILED]") << endl << endl;

    // --- Case 2 ---
    vector<int> test2 = {64, 25, 12, 22, 11, 90};
    int k2 = 1;
    vector<int> expected2 = {11, 25, 12, 22, 64, 90};
    vector<int> obtained2 = selectionSortKSwaps(test2, k2);

    cout << "Input:           "; printVector(test2);
    cout << "k:               " << k2 << endl;
    cout << "Expected Output: "; printVector(expected2);
    cout << "Actual Output:   "; printVector(obtained2);
    cout << (obtained2 == expected2 ? "[PASSED]" : "[FAILED]") << endl;
}

int main() {
    IOFAST();
    runLocalTests();  // <- local testing mode
    // onlineJudge(); // <- online judge mode

    return 0;
}