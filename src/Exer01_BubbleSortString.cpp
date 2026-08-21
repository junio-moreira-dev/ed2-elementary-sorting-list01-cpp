//
// Created by Juninho Moreira on 18/08/26.
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

// 1. PURE LOGIC
// TODO: Definir a funcao principal de solucao
string bubbleSortString(string str) {
    int n = static_cast<int>(str.length());

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char target = str[j];
                str[j] = str[j + 1];
                str[j + 1] = target;
                swapped = true;
            }
        }
        // Se não houve troca, o vetor já está ordenado!
        if (!swapped) break;
    }
    return str;
}

// 2. ONLINE JUDGE ADAPTER
void onlineJudge() {
    // TODO: Leitura de entradas e chamada da solucao para juiz online
    string s;
    if (!(cin >> s)) return;
    cout << bubbleSortString(s) << "\n";
}

// 3. LOCAL TESTS
void runLocalTests() {
    cout << "=== Test Q1 (Character Sorting with Bubble Sort) ===\n\n";

    // --- Case 1 ---
    string test1 = "estrutura";
    string expected1 = "aeerrsttu";
    string obtained1 = bubbleSortString(test1);

    cout << "Input:           " << test1 << "\n";
    cout << "Expected Output: " << expected1 << "\n";
    cout << "Actual Output:   " << obtained1 << "\n";
    cout << (obtained1 == expected1 ? "[PASSED]" : "[FAILED]") << "\n\n";

    // --- Case 2 ---
    string test2 = "patrocinio";
    string expected2 = "aciinooprt";
    string obtained2 = bubbleSortString(test2);

    cout << "Input:           " << test2 << "\n";
    cout << "Expected Output: " << expected2 << "\n";
    cout << "Actual Output:   " << obtained2 << "\n";
    cout << (obtained2 == expected2 ? "[PASSED]" : "[FAILED]") << "\n";
}

int main() {
    IOFAST();
    runLocalTests();  // <- modo de testes locais
    // onlineJudge(); // <- modo juiz online

    return 0;
}