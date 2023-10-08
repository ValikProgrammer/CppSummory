int n, div = 2;
n = 525;
vector<int> factor ;
while (n > 1) {
    while (n % div == 0) {
    n = n / div;
    factor.push_back(div);
    }
    div++;
}

for (auto i : factor) {
    cout << i << " "; // 3  5 5 7
}