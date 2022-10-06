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