#include <bits/stdc++.h>
using namespace std;

#define cr(res) cout << res << "\n";
#define szv(v) int((v).size())
#define sza(arr) int( sizeof(arr)/sizeof(arr[0]) )
#define pb(a) push_back(a)
#define X first
#define Y second
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fornr(i,n) for (int i = n; i > 0 ; i-- )
#define for1(i, n) for (int i = 1; i <= int(n); i++)
#define each(i,vec) for (auto i : vec)
#define printv(vec) for (auto i : vec) cout << i << " "; cout << "\n\n";
#define printv2(v)  forn(i,v.size()) { forn(j,v.size()) { cout << v[i][j] << " " ; } cout << "\n";}
// #define print(vec) for (auto i : vec) cout << i << " ";
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
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vector<int>> vvi;
typedef vector<set<pii>> vspi;
typedef map<string,string> mss;
typedef string str;

#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define um unordered_map
#define en '\n'
#define us unordered_set
const int INF = (int)1e9;

int manacher_even(string s) {
    int n = (int) s.size();
    vector<int> d(n, 0);
    int l = -1, r = -1;
    for (int i = 0; i < n - 1; i++) {
        if (i < r)
            d[i] = min(r - i, d[l + r - i - 1]);
        while (i - d[i] >= 0 && i + d[i] + 1 < n && s[i - d[i]] == s[i + d[i] + 1])
            d[i]++;
        if (i + d[i] > r)
            l = i - d[i] + 1, r = i + d[i];
    }
    return maxE(d);
}
int manacher_odd(string s) {
    int n = (int) s.size();
    vector<int> d(n, 1);
    int l = 0, r = 0;
    for (int i = 1; i < n; i++) {
        if (i < r)
            d[i] = min(r - i + 1, d[l + r - i]);
        while (i - d[i] >= 0 && i + d[i] < n && s[i - d[i]] == s[i + d[i]])
            d[i]++;
        if (i + d[i] - 1 > r)
            l = i - d[i] + 1, r = i + d[i] - 1;
    }
    return maxE(d);
}

void solve() {
    int n ; cin >> n ;
    str s ; cin >> s;//= "abbababba";
    // str ss  (s.rbegin(),s.rend());
    // reverse(ss.begin(),ss.end());//(s.rbegin(),s.rend());
    // cout << (s+'\n'+(s.rbegin(),s.rend()));
    // cr(s+"\n"+ss);
    // cr( s == ss);
    // vi res;
    int mx = 0;

    forn( i , n ) {
        str temp = (s.substr(0,i));
        // cr(temp);
        int res = 0 ;
        // str ss  (temp.rbegin(),temp.rend());

        if (temp.size()*2 % 2 == 0 ) {
            res = manacher_odd(temp);
        } else {
            res = manacher_even(temp);
        }5
        mx = max(mx,res);
    }
    cr(mx);
    // if (s.size()*2 % 2 == 0 ) {
    //     res = manacher_odd(s+ss);
    // } else {
    //     res = manacher_even(s+ss);
    // }
    // printv( res );
    // int n; n = maxE(res);
    // cr( --n );
}

int main() {
// freopen("in.txt", "r", stdin);
// freopen("out.txt", "w", stdout);
    int tt = 1;//; cin >> tt ;
    while ( tt -- ) {
        solve();
    }

    return 0;
}
