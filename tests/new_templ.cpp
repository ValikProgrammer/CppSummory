#include <bits/stdc++.h>
using namespace std;

#define cr(res) cout << res << "\n";
#define debug(x) cerr << #x << " = " << x << "\n";
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define X first
#define Y second
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fornr(i,n) for (int i = n; i > 0 ; i-- )
#define for1(i, n) for (int i = 1; i <= int(n); i++)
#define forn1(i,n) for (int i = 1; i < int(n); i++)
#define FOR(i,d,n) for(int i = d ; i < n ; i++)
#define pnv(vec) for (auto i : vec) cout << i << " "; cout << "\n";
#define pnv2(v,n,m)  forn(i,n) { forn(j,m) { cout << v[i][j] << " " ; } cout << "\n";}
#define pnvp(v) each(i,v) { cout << i.X << " " << i.Y << "\n"} // check 
#define iv(v,x) find(v.begin(),v.end(),x)-v.begin();
#define riv(v,x) szv(v) - (find(v.rbegin(),v.rend(),x) -v.rbegin()) 
// #define maxE(vec) *max_element(vec.begin(),vec.end());
// #define minE(vec) *min_element(vec.begin(),vec.end());
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

#define endl "\n"
#define nn "\n"
#define um unordered_map
#define us unordered_set
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define len(x) x.size()
#define all(x) (x.begin(),x.end())

const int INF = (int)1e9;
const int MOD = (int)1e9+7;
// bool cmpr(const vi &a,const vi &b)  { 
//     return (a[2] < b[2]); 
// } 

template < typename T, typename V > void pn( pair<T,V> x) { cout << "{" << x.first << " , " << x.second << "}\n";}
template < typename T, typename V > void ps( pair<T,V> x) { cout << "{" << x.first << " , " << x.second << "} ";}
template<typename T> void pn(T x) { cout  << x << "\n";}
template<typename T> void ps(T x) { cout  << x << " ";}
template <typename T> void pn(T *x) {for (auto i : *x ) {ps(  i ); }cout << "\n"; }
template <typename T> void pn2( T *x) {for (auto i : *x ) {for (auto j : i) {cout << j << " ";}cout << "\n";}}



int main ( ) {
/*
###############===INSTRUCTION===#############
#you can print any type of data using on or ps
# ps - print with the sapce on the end
# pn - with the \n on the end
# for matrix of vectors use print2
#################################################
*/
    // mii mp = {
    //     {1,3},
    //     {4,5},
    // };
    // vi v = {1,2,3,5,4};
    // vpi vp = {
    //     {1,2},
    //     {5,6},
    // };
    // int n = 123;
    // pii p = {1,2};
    // str s = "helloo!0";
    // matrix mtrx(5 , vi(5,0));
    // vector<pair<char,str>> t1 = {
    //     {'c',"cccc"},
    //     {'d',"ddddd"},
    // } ;
    // si sss= {1,2,2,1,2,2,1};
    // bool t = true;

    // pn(n);
    // pn(s);
    // pn(p);
    // pn(&mp);
    // pn(&v);
    // pn(&t1);
    // pn(&vp);
    // pn(&sss);
    // pn(t);


    // // str ss = "====";
    // // pn(ss);

    // // str ss = "====";
    // pn( s="sss");
    // pn2(&mtrx);




    // n - single type and pairs
    // &v - for vectors,set
    return 0;
}
