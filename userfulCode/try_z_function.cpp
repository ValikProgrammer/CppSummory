#include <bits/stdc++.h>

using namespace std;

vector<int> z_function( string s ) {
    /*
    завести массив, 
    посчиать длину строки
    цикл for за N (i,l,r = 0)
    условие не вышли ли за границы
    while(наивный алгоритм, улучшить результат)
    проверить границы r и возмодно обновить его
    */
    int n =  s.size();
    vector<int> z(n,0);

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
    return z;
}



int main () {
    string s = "abacaba";
    cout << s << "\n";

    vector<int> v = z_function(s);
    for( auto i : v) {
        cout << i ;
    }
    cout << "\n";

    return 0;
}