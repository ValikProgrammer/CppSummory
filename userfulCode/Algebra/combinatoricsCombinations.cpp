#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
int INF = 1000;
vector< vector<long long>> c (INF+1, vector<long long>(INF+1,0) );

int main() {
    c[1][1] = 1;
    for (int n = 2; n <= INF; n++) {
        c[n][1] = n;
        for (int k = 2; k <= n; k++) {
            c[n][k] = (c[n - 1][k] + c[n - 1][k - 1]) % MOD;
        }
    }

    int n = 4, k = 2; // combination from n by k
    cout << c[n][k]; // 6
}