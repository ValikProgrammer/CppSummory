#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 1000000;
	vector<int> sieve (n);
	for (int x = 2; x*x <= n; x++) {
		if (sieve[x]) continue;
		for (int k = 2*x; k <= n; k += x) {
			sieve[k] = 1;
		}
		
	}
	
	sieve[0] = sieve[1] = 1;

  return 0;
}