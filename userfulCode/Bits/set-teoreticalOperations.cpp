    int x= 0  ; 
    vector<int> v = {1,3,4,8}; // set 

    // convert into int 
    for (int i = 0 ; i < v.size(); ++i) {
        x |= ( 1<< v[i] );
    }
    cout << x << " " << __builtin_popcount(x) << "\n"; // x and amount of 1 in number - 282 , 4

    // print elements that are in set
    for (int i = 0 ; i < 32 ; ++i) {
        if ( x & ( 1<<i ) ) cout << i << " ";
    }

    int x = 0 , y = 0  ; 
    vector<int> vx = {1,3,4,8}; // first set 
    vector<int> vy = {3,6,8,9,0}; // second set 

    // // convert into int 
    for (int i = 0 ; i < vx.size(); ++i) {
        x |= ( 1<< vx[i] );
    }

    for (int i = 0 ; i < vy.size(); ++i) {
        x |= ( 1<< vy[i] );
    }

    cout << x << " " << __builtin_popcount(x) << "\n"; // x and amount of 1 in number - 282 , 4

    int z = x|y; // new set (обьединение)
    print elements that are it set
    for (int i = 0 ; i < 32 ; ++i) {
        if ( z & ( 1<<i ) ) cout << i << " ";
    }

    // using bitset
    bitset<8> s;
    vector<int> v = {1,3,4,8}; // set 
    for (int i = 0 ; i < v.size() ; ++i) {
        s[ v[i] ] = 1;
    }

    for (int i = 0 ; i < 10 ; ++i) {
        cout << s[i] ;
    }

    cout << "\n\n" << s.count() << "\n"; // amount of 1 in set