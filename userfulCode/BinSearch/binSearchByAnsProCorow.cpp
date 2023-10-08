
bool check(vi &v, int d) {
    int last_pos = v[0]; // last 
    int counter = 1; // get one answer as well

    for ( int p : v  ) {
        if ( last_pos + d > p) { // если еще не валидный диапазон и предыдущая дистанция у нас занимает место
            continue;
        }
        last_pos = p;
        counter++;
    }

    return counter >= 3;// ведь 3 коровы в стоилах нужно разместить, если бы было больше, то просто тут значение заменить
}

int solve () {
    int n = 6;
    vi v = {2,5,7,11,15,20};

    int l = 0 , r = 1000;
    while ( l+1 < r) {
        int m = (l+r)/2;
        cr(m);
        if ( check (v , m)) 
            l = m;
        else 
            r = m;
    }
    return l;
}