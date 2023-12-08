#include <bits/stdc++.h>
using namespace std;

// data types 
typedef string str;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pair<int,int>> vpi;
typedef vector<pair<ll,ll>> vpl;
typedef vector<vector<int>> matrix;
typedef map<string,string> mss;
typedef map<int,int> mii;
typedef set<int> si;
typedef set<char> sc;
// constants
const int INF = (int)1e9;
const int MAXN = (int)1e5+10;
const int MOD = (int)1e9+7;
const vi dx = {-1,0,1,0};
const vi dy = {0,1,0,-1};
// shortcuts
#define X first
#define Y second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define len(x) x.size()
#define all(x) x.begin(),x.end()
// #define N << "\n"
// #define nn "\n"
// loops
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fornr(i,n) for (int i = n; i > 0 ; i-- )
#define for1(i, n) for (int i = 1; i <= int(n); i++)
#define forn1(i,n) for (int i = 1; i < int(n); i++)
#define FOR(i,d,n) for(int i = d ; i < n ; i++)
// functions 
#define iv(v,x) find(v.begin(),v.end(),x)-v.begin();
#define riv(v,x) szv(v) - (find(v.rbegin(),v.rend(),x) -v.rbegin()) 
#define bin(n) {str b = bitset<64>(n).to_string();b.erase(0, b.find_first_not_of('0'));cout << len(b) << "\n";}
// #define maxE(vec) *max_element(vec.begin(),vec.end())
// #define minE(vec) *min_element(vec.begin(),vec.end())
// ==== INPUT AND OUTPUT
// cin
template <class T> istream&         operator >> (istream& __in, vector<T>& v) { for (auto& e : v) { __in >> e; } return __in; }
template <class T,class V> istream& operator >> (istream& __in, vector<pair<T,V>>& v) { for (auto& e : v) { __in >> e.first >> e.second; } return __in; }
template <class T> istream&         operator >> (istream& __in, pair<T, T>& v)    { __in >> v.first >> v.second; return __in; }
// cout
// for set and vector are the same 
template <class T> ostream& operator << (ostream& __out, const vector<T>& v) { for (auto& e : v) { __out << e << " "; }  return __out; }
template <class T> ostream& operator << (ostream& __out, const set<T>& v)    { for (auto& e : v) { __out << e << " "; }  return __out; }
// pair 
template <class T, class V> ostream& operator << (ostream& __out, const pair<T, V>& v) { __out << "{ " << v.first << ":" << v.second << " }"; return __out; }
// vector of pairs and map
template <class T, class V> ostream& operator << (ostream& __out, const vector< pair<T, V>> & v) { for (auto& e : v) { __out << "{ " << e.first << ":" << e.second << " }" << "\n"; }  return __out; }
template <class T, class V> ostream& operator << (ostream& __out, const map< T, V> & v) { for (auto& e : v) { __out << e.first << ":" << e.second << "\n"; }  return __out; }
// it can print 2d vector, but there is no \n , so add new template
template <class T> ostream&          operator << (ostream& __out, const vector<vector<T>>& v) { for (auto& e : v) { for (auto& ee : e ) {__out << ee << " "; } __out << "\n";}  return __out; }

#define debug(args...) {string _s = #args;replace(_s.begin(),_s.end(),',',' ');stringstream _ss(_s);istream_iterator<string> _it(_ss);_debug(_it,args);}
void _debug(istream_iterator<string> it) { cout << "\n";}
template<typename T,typename... Args> void _debug(istream_iterator<string> it, T a, Args... args) { cout << *it << " = " << a << " ";  _debug(++it,args...); }
#define print(args...) {str sep = " ";_print(sep,args);}
void _print(str sep) { cout << "\n";}
template<typename T,typename... Args> void _print(str sep, T a, Args... args) { cout << a << sep; _print(sep,args...); }
// ==== INPUT AND OUTPUT

#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(0);
#define Iron_man47 cout.tie(0);


vi dx = {-1,0,1,0};
vi dy = {0,1,0,-1};
int bfs(vs& graph, int startX, int startY,int finishX,int finishY ) {
    int h = len(graph), w = len(graph[0]);

    matrix dist( h , vi (w,MAXN) ); // 2d vector
    dist[startX][startY] = 0;

    queue<pii> q; // q of pairs
    q.push( {startX, startY} );

    // if there is many starts, we mark they all with dist = 0 and will get correct res in the end 
    /* for(auto&[sx sy] : vector_of_starts_of_pairs) {
        dist[sx][sy] = 0;
        q.push( {sx,sy} );
    }
    */

    vector<vpi> from (h , vpi (w, {-1,-1}));// vector of pairs (restore path )

    while ( !q.empty() ) {
        auto [x,y] = q.front(); q.pop();
        // make coordinates , check they are valid and go to next cells
        forn(i , len(dx)) {
            int nx = x+dx[i];
            int ny = y+dy[i];
            if ( nx >= 0 && ny >= 0 && nx < h && ny < w ) {
                // valid coordinates
                if ( graph[nx][ny] != '#' && dist[nx][ny] > dist[x][y]+1) { // if it is not wall and we was't there
                    dist[nx][ny] = dist[x][y] +1;
                    q.push ( { nx,ny } );
                    from[nx][ny] = {x,y};
                }
            }
        }
    }

    // get path (mark it with *)
    if (dist[finishX][finishY] != MAXN) {
        pii finish = {finishX,finishY};
        while( finish.X != -1 && finish.Y != -1 ) {
            graph[finish.X][finish.Y] = '*';
            finish = from[finish.X][finish.Y];
        }
    }

    // print graph 
    for (str row : graph) {
        print(row);
    }

    return dist[finishX][finishY];


}


int main ( ) {
    /*
8 10
..#.......
......#.F.
...#######
..........
#######.##
.....#....
.S.#.#....
...#......
    */
    int h,w ; cin >> h >> w;
    vs graph (h);
    // cin >> g;
    int startX = 0 , startY = 0;
    int finishX = h-1, finishY = w-1;
    forn(i,h) {
        cin >> graph[i];
        forn(j,w) {
            if ( graph[i][j] == 'S' ) {
                startX = i;
                startY = j;
            } else if ( graph[i][j] == 'F' ) {
                finishX = i;
                finishY = j;
            }
        }
    }

    // debug(startX,startY,finishX,finishY);
    int distance = bfs( graph, startX,startY,finishX,finishY );
    if (distance != MAXN) {
        print(distance)
    } else {
        print("Mission Impossible")
    }

    return 0;
}
