bool check(int count, int h , int w , int board) {
    int rows = board / w;
    int cols = board / h;
    // return rows*cols >= count;// if data is to big you should use ll and devide numbers (instead of *)
    return cols > 0 && rows >= count / cols;
}

int solve () {
    int count , h,w;
    // cin >> count >> h >> w;
    count = 13, h = 5, w = 3;
    int l = 0 , r = 1e9; // or r can be count*h, 1e5 - no overflow
    while ( l+1 <  r ) {
        int m = (l+r)/2; // the same as l + ( r-l )/2;
        if ( check (count,h,w,m) ) {
            r = m;
        } else {
            l = m;
        }
    }    
    return r;
}