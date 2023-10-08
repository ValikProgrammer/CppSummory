long long fact(int x) {
    long long result = 1;
    for (int i = 2; i <= x; i++) {
        result *= i;
    }

    return result;
}