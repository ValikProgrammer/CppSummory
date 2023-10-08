int my_bin_seacrh(vi &v, int x) { 
    int l = 0 , r = v.size() , m;

    // check if element exists in array
    if ( x > v[ r-1 ] ) { // if x is greater the the last element in array -> it can't be here
        return -1; // invalid index (or it can be r instead of -1)
    }

    while ( l <= r ) {
        m = ( l+r )/2; // middle

        if ( x == v[ m ] ) {
            return m;
        } else if ( x > v[ m ]) {
            l = m+1;
        } else {
            r = m-1;
        }
    }
    return l;
}