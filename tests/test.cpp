#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned ll
#define uint unsigned
#define pii pair<int,int>
#define pll pair<ll,ll>
#define IT iterator
#define PB push_back
#define fi first
#define se second
#define For(i,j,k) for (int i=(int)(j);i<=(int)(k);i++)
#define Rep(i,j,k) for (int i=(int)(j);i>=(int)(k);i--)
#define CLR(a,v) memset(a,v,sizeof(a));
#define CPY(a,b) memcpy(a,b,sizeof(a));
#define debug puts("wzpakking");
#define y1 ysghysgsygsh;



// void __print(ll x) {cerr << x;}
// void __print(ld x) {cerr << x;}
// void __print(char x) {cerr << '\'' << x << '\'';}
// void __print(const char *x) {cerr << '\"' << x << '\"';}
// void __print(const string &x) {cerr << '\"' << x << '\"';}
// void __print(bool x) {cerr << (x ? "true" : "false");}
 
// template<typename T, typename V>
// void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
// template<typename T>
// void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
// void _print() {cerr << "]\n";}
// template <typename T, typename... V>
// void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}


// void print_v(vector<int>& v ) {
//     // cout << *v ;
//     for (auto i : v ) {
//         cout << i ;
//     }
// }
typedef long long ll;
str dec_to_bin(ll n) {
    str binary = bitset<64>(n).to_string();
    binary.erase(0, binary.find_first_not_of('0'));
    cout << binary << endl;
}

// #define bin(x) {\
//     cout << dec_to_bin(x)
// }

int main () {
    // vector<int> v = {1,2,3,4,5,1,2,4,99};
    // print_v(*v);
    // _print(v);

    int n = 63;
    // for( i
    dec_to_bin(n);
    return 0 ;
}