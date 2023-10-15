#include <bits/stdc++.h>
using namespace std;

#define cr(res) cout << res << "\n";
// #define debug(x) cerr << #x << " = " << x << "\n";
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define X first
#define Y second
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fornr(i,n) for (int i = n; i > 0 ; i-- )
#define for1(i, n) for (int i = 1; i <= int(n); i++)
#define forn1(i,n) for (int i = 1; i < int(n); i++)
#define FOR(i,d,n) for(int i = d ; i < n ; i++)
#define printv(vec) for (auto i : vec) cout << i << " "; cout << "\n";
#define printv2(v,n,m)  forn(i,n) { forn(j,m) { cout << v[i][j] << " " ; } cout << "\n";}
#define printvp(v) each(i,v) { cout << i.X << " " << i.Y << "\n"} // check 
#define iv(v,x) find(v.begin(),v.end(),x)-v.begin();
#define riv(v,x) szv(v) - (find(v.rbegin(),v.rend(),x) -v.rbegin()) 
// #define maxE(vec) *max_element(vec.begin(),vec.end())
// #define minE(vec) *min_element(vec.begin(),vec.end())
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(0);
#define Iron_man47 cout.tie(0);

typedef string str;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pair<int,int>> vpi;
typedef vector<pair<ll,ll>> vpl;
typedef vector<vector<int>> matrix;
typedef map<string,string> mss;
typedef map<int,int> mii;
typedef set<int> si;
typedef set<char> sc;

#define N << "\n"
// #define nnn << "\n"
// #define out cout <<
#define um unordered_map
#define us unordered_set
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define len(x) x.size()
#define all(x) x.begin(),x.end()
// #define _ << " " <<
const int INF = (int)1e9;
const int MOD = (int)1e9+7;
// bool cmpr(const vi &a,const vi &b)  { 
//     return (a[2] < b[2]); 
// } 


// ==== INPUT aNd OUTPUT
template <typename T, typename V > void pn( pair<T,V> x) { cout << "{" << x.first << " , " << x.second << "}\n";}
template <typename T, typename V > void ps( pair<T,V> x) { cout << "{" << x.first << " , " << x.second << "} ";}
template <typename T> void pn( T x)  { cout  << x << "\n";}
template <typename T> void ps( T x)  { cout  << x << " ";}
template <typename T> void pn( T *x) {for (auto i : *x ) {ps(  i ); }cout << "\n"; }
template <typename T> void pn2(T *x) {for (auto i : *x ) {for (auto j : i) {cout << j << " ";}cout << "\n";}}

// cin
template <class T> istream& operator >> (istream& in, vector<T>& v) { for (auto& e : v) { in >> e; } return in; }
template <class T,class V> istream& operator >> (istream& in, vector<pair<T,V>>& v) { for (auto& e : v) { in >> e.first >> e.second; } return in; }
template <class T> istream& operator >> (istream& in, pair<T, T>& v) { in >> v.first >> v.second; return in; }

// for set and vector are the same 
template <class T> ostream& operator << (ostream& out, const vector<T>& v) { for (auto& e : v) { out << e << " "; }  return out; }
template <class T> ostream& operator << (ostream& out, const set<T>& v) { for (auto& e : v) { out << e << " "; }  return out; }
// pair 
template <class T, class V> ostream& operator << (ostream& out, const pair<T, V>& v) { out << "{ " << v.first << ":" << v.second << " }"; return out; }
// double vector and map
template <class T, class V> ostream& operator << (ostream& out, const vector< pair<T, V>> & v) { for (auto& e : v) { out << "{ " << e.first << ":" << e.second << " }" << "\n"; }  return out; }
template <class T, class V> ostream& operator << (ostream& out, const map< T, V> & v) { for (auto& e : v) { out << e.first << ":" << e.second << "\n"; }  return out; }
// it can print 2d vector, but there is no \n , so add new template
template <class T> ostream& operator << (ostream& out, const vector<vector<T>>& v) { for (auto& e : v) { for (auto& ee : e ) {out << ee << " "; } out << "\n";}  return out; }

#define debug(args...) {string _s = #args;replace(_s.begin(),_s.end(),',',' ');stringstream _ss(_s);istream_iterator<string> _it(_ss);_debug(_it,args);}
void _debug(istream_iterator<string> it) { cout << "\n";}
template<typename T,typename... Args> void _debug(istream_iterator<string> it, T a, Args... args) { cout << *it << " = " << a << " ";  _debug(++it,args...); }
#define print(args...) {str sep = " ";_print(sep,args);}
void _print(str sep) { cout << "\n";}
template<typename T,typename... Args> void _print(str sep, T a, Args... args) { cout << a << sep; _print(sep,args...); }
// ==== INPUT aNd OUTPUT



void precalc() {

}

void solve() {
    int n = 123;
    pii pair_int = {1,2};
    str strings = "helloo,world!";
    bool t = true;

    mii map_int = {
        {1,3},
        {4,5},
    };
    mss map_str = {
        {"a","b"},
        {"c","d"},
    };

    vi vector_int = {1,2,3,5,4};
    vpi vector_pair = {
        {1,2},
        {4,3},
    };
    
    vector<pair<char,str>> vector_pairs_different_types = {
        {'a',"aaaaaa"},
        {'d',"bbbbbb"},
    };


    matrix vector_2d (5 , vi(5,0));
    si set_int = {1,2,2,1,2,2,1};



    debug(n,pair_int,strings,map_int,map_str,vector_int,vector_pair,vector_pairs_different_types,vector_2d,set_int);
    print("answer =",t,10*3);
    print("bye...")

}


int main ( ) {
    // Code By Iron_man47
    freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);

    int t = 1;
    // cin >> t;
    while ( t--) {
        solve();
    }

    return 0;
}

