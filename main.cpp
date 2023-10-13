#include <bits/stdc++.h>
using namespace std;


// #define debug(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s);istream_iterator<string> _it(_ss); err(_it, args); }
// void err(istream_iterator<string> it) {cout<<"\n";}
// template<typename T, typename... Args>
// void err(istream_iterator<string> it, T a, Args... args) {
//     cerr << *it << " = " << a <<"  ,  ";
//     err(++it, args...);
// }

#define debug(args...) {string _s = #args;replace(_s.begin(),_s.end(),',',' ');stringstream _ss(_s);istream_iterator<string> _it(_ss);err(_it,args);}
void err(istream_iterator<string> it) { cout << "\n";}
template<typename T,typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << " ";
    err(++it,args...);
}


// #define deb(args...) { \
//     string _s = #args; \
//     replace(_s.begin(), _s.end(), ',', ' '); \
//     cout << _s << "\n";\
// }


    
//     //stringstream _ss(_s);istream_iterator<string> _it(_ss); err(_it, args); }
// void err(istream_iterator<string> it) {cout<<endl;}
// template<typename T, typename... Args>
// void err(istream_iterator<string> it, T a, Args... args) {
//     cerr << *it << " = " << a <<"  ,  ";
//     err(++it, args...);
// }


int main() {
    string s  = "abacaba"; 
    string s2 = "dubaduba";
    string s3 = "chego ty smotrish?";
    cout << s << "\n";
    int n = 100;
    vector<int> v= {1,2,3,4};
    debug(&v);
    // debug(s,s2,n,s3,"hello");




}