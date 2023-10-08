// recusdion with memoiz
vi coins = {1,3,4};
int y = 1e8;
vi value(y+1,0);
vector<bool> ready(y+1,0);

int recf(int x ) {
    if ( x == 0 ) return 0;
    if ( x < 0)   return INF;
    if (ready[x]) return value[x];

    int mn = INF;
    for ( int coin : coins) 
        mn = min( mn , (recf(x-coin)+1)  );
    
    value[x] = mn;
    ready[x] = true;
    return mn;
}



// for loop memoiz

    vi coins = {1,3,4};
    int y = 15;
    vi mem(y+1,INF);
    mem[0] = 0 ;

    for ( int i = 1 ; i <= y; ++i) {
        for( int c : coins) {
            if (i-c >= 0 ) {
                mem[i] = min(mem[i], mem[i-c]+1);
            }
        }
    }

    cr(mem.back() );



// with constructive path

int y = 15;
vi coins = {1,3,4};
vi mem(y+1,INF);
mem[0] = 0 ;
vi path(y,0);

for ( int i = 1 ; i <= y; ++i) {
    for( int c : coins) {
        if (i-c >= 0 && mem[i-c]+1 < mem[i]) {
            mem[i]  = mem[i-c]+1;
            path[i] = c; 
        }
    }
}

cr(mem.back() ); // 4
pn(&path); // 0 1 1 3 4 1 3 3 4 1 3 3 4 1 3 
while ( y > 0 ) {
    ps(path[y]); // 3 4 4 4 
    y -= path[y];
}


// cacl amount of ways to construct this usm using coins
int y = 15;
vi coins = {1,3,4};
vi count(y+1,0);
count[0] = 1;
for (int x = 1; x <= y; x++) {
    for (auto c : coins) {
        if (x-c >= 0) {
            count[x] += count[x-c];
            count[x] %= MOD;
        }
    }
}
pn(count.back()); // 714