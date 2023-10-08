#include <bits/stdc++.h>
using namespace std;

vector<int> my_z_function( string s) {
    int n = (int) s.size();
    vector<int> z (n,0);

    for (int i = 1 , l = 0 , r = 0; i < n ; ++i) {
        if ( i <= r ) {
            z[i] = min(r-i+1, z[i-l]);
        }

        while ( z[i] + i < n && s[ z[i] ] == s[ z[i]+i ]) {
            ++z[i];
        }

        if ( i+z[i]-1 > r) {
            r = i+z[i] -1;
            l = i;
        }
    }
    return z;
}

/* with prints (debug view1)
    for (int i = 1, l = 0, r = 0 ; i < n ; ++i) {
        printf("===>I:%d\n",i);
        if ( i <= r) {
            printf("    First IF:[(r-i+1 , z[i-l])]  min(%d,%d) = %d\n ",r-i+1, z[i-l], min(r-i+1, z[i-l]));
            z[i] = min (r-i+1 , z[i-l]);
        }

        while (z[i] + i < n && s[z[i]] == s[z[i]+i]) {
            // printf("WHILE %s %s z[i]  = %d\n",s[z[i]], s[z[i]+i],z[i]);
            printf("        WHILE %d(%c) %d(%c) z[i]  = %d \n",z[i],s[z[i]], z[i]+i,s[z[i]+i],z[i]+1);
            z[i]++;
        }

        if ( z[i]+i-1 > r ) {
            printf("            Last IF: z[i] = %d, i = %d , r = %d, \n",z[i],i,r);
            l = i ; r = z[i]+i-1;
            printf("            After last IF: l = %d , r = %d\n",l,r);
        }
    }
*/



int main ( ) {
    string s = "hello world hello c++";
    string t = "hello";

    vector<int> p = my_z_function( t + '$' + s);
    for ( int i = 0 ; i < p.size() ; i++) {
        if  ( p[i] == t.size()  ) {
            printf("Found length %d at postion %d\n",p[i],i-t.size()-1);// -1 because of special char
        }

    }
}
