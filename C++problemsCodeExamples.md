### Сложные , алгоритмы
+ https://codeforces.com/problemset/problem/230/B


### Легкие , но нужно догадаться

+ https://codeforces.com/contest/1374/problem/C
+ https://codeforces.com/problemset/problem/1433/A


### Жадные алгоритмы 
+ https://codeforces.com/problemset/problem/1367/B   (легкая)
+ https://codeforces.com/problemset/problem/1353/B ( посложнее)


def euclidus(numerator, denominator):
  if numerator == denominator:
    return(numerator)
  else:
    if numerator > denominator:
      return euclidus(numerator - denominator, denominator)
    else:
      return euclidus(numerator, denominator - numerator)

print(euclidus(9,6))





#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, div = 2;
  cout << "N = ";
  cin >> n;

  vector<int> prostyeMnojitely ;
  while (n > 1) {
    while (n % div == 0) {
      n = n / div;
      prostyeMnojitely.push_back(div);
    }
    div++;
  }
  
  cout << n << " = 1";
  for(auto i : prostyeMnojitely) 
    cout << " * " << i; 
  cout << "\n";

  return 0;
}



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