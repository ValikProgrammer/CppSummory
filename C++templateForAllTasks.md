# TEMPLATE
+ ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  #define cr(res) cout << res << "\n";
  #define szv(v) int((v).size())
  #define sza(arr) int( sizeof(arr)/sizeof(arr[0]) )
  #define pb(a) push_back(a)
  #define X first
  #define Y second
  #define forn(i, n) for (int i = 0; i < int(n); i++)
  #define for1(i, n) for (int i = 1; i <= int(n); i++)
  #define each(i,vec) for (auto i : vec)
  #define printv(vec) for (auto i : vec) cout << i << " "; cout << "\n\n";
  #define printa(arr) for (int i = 0 ; i < sza(arr) ; i++) cout << arr[i] << " "; cout << "\n\n";
  #define debug(x) cerr << #x << " = " << x << "\n";
  #define iV(v,x) find(v.begin(),v.end(),x)-v.begin();
  #define riV(v,x) szv(v) - (find(v.rbegin(),v.rend(),x) -v.rbegin()) // reverse vector and get index from the end then len(vec) - index = index from start (not from the end)
  #define maxE(vec) *max_element(vec.begin(),vec.end());
  #define minE(vec) *min_element(vec.begin(),vec.end());
  #define opere(a,b,c,d) ( a == b ? cout << c << "\n" : cout << d << "\n"); // if equals
  #define operm(a,b,c,d) ( a >= b ? cout << c << "\n" : cout << d << "\n");  // if more or equals
  #define isTrue(a,c,d) ( a == true ? cout << c << "\n" : cout << d << "\n");

  typedef unsigned int ui;
  typedef long long ll;
  typedef unsigned long long ull;
  typedef long double ld;
  typedef pair<int,int> pii;
  typedef pair<ll,ll> pll;
  typedef vector<pair<int,int>> vpi;
  typedef vector<int> vi;
  typedef vector<ll> vl;
  typedef vector<vector<int>> vvi;
  typedef vector<set<pii>> vspi;
  typedef map<string,string> mss;
  typedef string str;

  int main() {
    freopen("in.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    return 0;
  }

  ```
