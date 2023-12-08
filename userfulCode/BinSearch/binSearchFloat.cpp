#include <bits/stdc++.h>
using namespace std;

int main () {

  // task
  // just find square root of number
  int n ; cin >> n ;

  double l = 1 , r = n;
  for (int i = 0 ; i < 100 ; i++) {
    double m = (l+r)/2;
    if ( m*m > n ) {
      r = m;
    } else {
      l = m;
    }
  }

  cout << setprecision(9); cout << fixed;
  cout << l << " " << r << "\n";

}


