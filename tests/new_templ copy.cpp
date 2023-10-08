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
#define printv(vec) for (auto i : vec) cout << i << " "; cout << "\n";
#define printv2(v,n,m)  forn(i,n) { forn(j,m) { cout << v[i][j] << " " ; } cout << "\n";}
#define printvp(v) each(i,v) { cout << i.X << " " << i.Y << "\n"} // check 
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

// need to print
// function name = print()
// int, 
// string
// vector ans set(with for auto)
// vector ans set and map for pairs (with for auto i.x ...)
// 



// #define var_to_s(x) #x;
// void print( int x ) {
//     cout << x << "\n";
// }
// void print( str x ) {
//     cout << x << "\n";
// }
// void print( vi x ) {
//    for (auto i : x ) {
//         cout << i << " ";
//    }
//    cout << "\n";
// }
// void print( mii x ) { // the same as vpi
//    for (auto i : x ) {
//         cout << i.first << " : " << i.second << " ";
//    }
//    cout << "\n";
// }

// void print( vpi x ) {
//    for (auto i : x ) {
//         cout << i.first << ":" << i.second << "\n";
//    }
// }


// void print( pii x ) {
// //    for (auto i : x ) {
//     cout << x.first << ":" << x.second << "\n";
// //    }
// }

/*
template<typename T, typename V> // pair 
void print(pair <T, V> x) {
    cout << '{' << x.first << " , " << x.second << "}\n";
    // cout << x.first << x.second ;
}
// type

// void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T> void print(T *x) { // vector set
    for (auto i : *x) {
        // cout << print(i) << " ";
        print(i); // if i -> &i , if *i -> vec
    }
    cout << "\n";
}

template<typename T> void print(T x) { // int , float ...
    cout << x << "\n";
}

template <typename T, typename... V> void print(T t, V... v) {
    cout << "hello there";
}
*/

// void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
// void _print() {cerr << "]\n";}
// template <typename T, typename... V>
// void _print(T t, V... v) {
//     __print(t); 
//     if (sizeof...(v)) cerr << ", "; _print(v...);}




// void __print(ll x) {cout << x;}
// void __print(vi x) { for (auto i : x) cout << i << " "; cout << "\n";}
// void __print(ld x) {cerr << x;}
// void __print(char x) {cerr << '\'' << x << '\'';}
// void __print(const char *x) {cerr << '\"' << x << '\"';}
// void __print(const string &x) {cerr << '\"' << x << '\"';}
// void __print(bool x) {cerr << (x ? "true" : "false");}
 
// template<typename T, typename V> void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
// template<typename T>
// void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
// void _print() {cerr << "]\n";}
// template <typename T, typename... V>
// void print(T t, V... v) {cout << "h";}//{print(t); if (sizeof...(v)) cerr << ", "; print(v...);}

// void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}



// void print(const char x) {cout << '\"' << x << '\"';}
// void print(string x) {cout << '\"' << x << '\"';}

// void print()(str s) {
//     cout << "yeah!";
// }

// template <> void print() {
//     cout << "x";
// }

// template< typename C

template < typename T, typename V > // pair 
void print( pair<T,V> x) {
    cout << "pairN:::{" << x.first << " , " << x.second << "}\n";
    // cout << x.first << x.second ;
}
template < typename T, typename V > // pair 
void prints( pair<T,V> x) {
    cout << "pairS:::{" << x.first << " , " << x.second << "} ";
    // cout << x.first << x.second ;
}
// type

// void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}

// template <  typename M <typename V , typename T> > void print( M <V,T>  x) { // works for vecto
//     cout << "179::";
//     // for (auto i : x) {
//     //     cout << i << ",";
//     // }
// }

// // with arguments 
// template <typename T, typename... V> void print(T t, V... v) {
//     cout << "hello there 169:::";
// }

template<typename T> void print(T x) { // int , float , str ...
    cout << "singleN::: " << x << "\n";
}
template<typename T> void prints(T x) { // int , float , str ...
    cout << "singleS::: " << x << " ";
}
// template<typename T, typename... A> void print(T x, A... aaa) { // int , float , str ...
//     cout << "single_agrs::: " << x << *a; // a - it is can be ' ' instead of "\n"
// }



// template <typename T, typename ... Args>
// void print(T ,Args&&... args);

// template <> void print(str &x) {
//     cout << " nested \n";
//     // int c = 0 ;
//     // for (auto i : *x ) {
//     //     c++;
//     //     cout << "insede memory::" ;
//     //     // can be int,char or pair
//     //     print( i );
//     // }
//     // cout << "total counter = " << c << "\n";
// }



template <typename T>
void print(T *x) {
    cout << "    :::memory nested \n";
    int c = 0 ;
    for (auto i : *x ) {
        c++;
        cout << "insede memory::" ;
        // can be int,char or pair
        // print( i );
        // try {
        // // int age = 15;
        // // if (age >= 18) {
        // //     cout << "Access granted - you are old enough.";
        // // } else {
        // //     throw 505;
        // // }
        prints(  i ); // try print this as single type
        // }
        // catch (...) {
        // // cout << "Access denied - You must be at least 18 years old.\n";
        // // cout << "Error number: " << myNum;
        //     print(&i); // thta do that to print as nested obj
        // }

        // if constexpr (is_equality_comparable_with_v<T>) {
        //     cout << "9";
        // }
        // just use std::find
    }
    cout << "total counter = " << c << "\n";
}

//    template<typename T1, template <typename> typename Container, typename T2>
//     bool contains (Container<T1> const &source, T2 const &val)
//     {
template <typename T>
void print2( T *x) {
    for (auto i : *x ) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << "\n";
    }

}

// template < typename V <typename T> > void print(V <T> x ) {
//     cout << "dsf";
// }



// template <typename M <typename V , typename T> > void print( M <V,T>)

/*
template <  typename M  > void print( vector <M>  x) { // works for vecto
    cout << "171::";
    for (auto i : x) {
        cout << i << ",";
    }
}
*/





// template<typename T> void print(T *x) { // vector set
//     for (auto i : *x) {
//         // cout << print(i) << " ";
//         cout << "176:::" << nn;
//         print(i); // if i -> &i , if *i -> vec
//     }
//     cout << "\n";
// }



int main ( ) {
    mii mp = {
        {1,3},
        {4,5},
    };

    vi v = {1,2,3,5,4};
    vpi vp = {
        {1,2},
        {5,6},
    };
    // matrix

    int n = 123;
    pii p = {1,2};
    str s = "helloo!0";
    matrix mtrx(5 , vi(5,0));

    // print(n);
    // print(v);

    // print(vp);

    // cout << p.X << p.Y;

    print(n);
    print(s);
    print(p);
    print(&mp);
    print(&v);

    // // str ss = "====";
    // // print(ss);

    // // str ss = "====";
    // print( s="sss");
    print2(&mtrx);

    // for (auto i : n ) {
    //     cout <<i ;
    // }
    // ll x = 0;
    // cout << sizeof(x) ;



    // n - single type and pairs
    // &v - for vectors,set
    return 0;
}
