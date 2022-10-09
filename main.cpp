#include <bits/stdc++.h>

using namespace std;


vector<int> subset;
int n = 4;
void search(int k) {
    if (k == n+1) {
    // обработать подмножество
        for (auto i : subset) {
            cout << i << " ";
        }
    } else {
    // включить k в подмножество
    subset.push_back(k);
    search(k+1);
    subset.pop_back();
    // не включать k в подмножество2.2. Рекурсивные алгоритмы  33
    search(k+1);
    }
}

int main() {
    search(2);
}