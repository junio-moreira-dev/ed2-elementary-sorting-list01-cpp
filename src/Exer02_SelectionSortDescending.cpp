//
// Created by Juninho Moreira on 18/08/26.
// Question 2 - Descending Array Sorting with Selection Sort
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
    cout << "\n";
}

// 1. PURE LOGIC
vector<int> selectionSortDescending(vector<int> v) {
    // TODO: Implement Selection Sort to sort the array in descending order
    return v;
}

// 2. ONLINE JUDGE ADAPTER
void onlineJudge() {
    // TODO: Read inputs and invoke the solution for the online judge
}

// 3. LOCAL TESTS
void runLocalTests() {
    cout << "=== Test Q2 (Descending Array Sorting with Selection Sort) ===\n\n";

    // --- Case 1 ---
    vector<int> test1 = {3, 1, 4, 5, 2};
    vector<int> expected1 = {5, 4, 3, 2, 1};
    vector<int> obtained1 = selectionSortDescending(test1);

    cout << "Input:           "; printVector(test1);
    cout << "Expected Output: "; printVector(expected1);
    cout << "Actual Output:   "; printVector(obtained1);
    cout << (obtained1 == expected1 ? "[PASSED]" : "[FAILED]") << "\n\n";

    // --- Case 2 ---
    vector<int> test2 = {10, 20, 5, 8, 12, 15};
    vector<int> expected2 = {20, 15, 12, 10, 8, 5};
    vector<int> obtained2 = selectionSortDescending(test2);

    cout << "Input:           "; printVector(test2);
    cout << "Expected Output: "; printVector(expected2);
    cout << "Actual Output:   "; printVector(obtained2);
    cout << (obtained2 == expected2 ? "[PASSED]" : "[FAILED]") << "\n";
}

int main() {
    IOFAST();
    runLocalTests();  // <- local testing mode
    // onlineJudge(); // <- online judge mode

    return 0;
}