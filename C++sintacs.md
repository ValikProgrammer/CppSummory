# Cpp Summory
## Prepearing

+ ```cpp
  
  // using ll = long long; == typedef long long ll;
  #include <bits/stdc++.h>
  using namespace std;

  #define cr(res) cout << res << "\n";
  #define szv(v) int((v).size())
  #define sza(arr) int( sizeof(arr)/sizeof(arr[0]) )
  #define pb(a) push_back(a)
  #define X first
  #define Y second

  #define forn(i, n) for (int i = 0; i < int(n); i++)
  #define for1(i, n) for (int i = 1; i <= int(n); i++)
  #define each(i,vec) for (auto i : vec)
  #define printv(vec) for (auto i : vec) cout << i << " "; cout << "\n\n";
  #define printa(arr) for (int i = 0 ; i < sza(arr) ; i++) cout << arr[i] << " "; cout << "\n\n";
  #define debug(x) cerr << #x << " = " << x << "\n";
  // #define iA(arr,x) (int)(find(arr,arr+sza(arr),x)-arr);
  // #define riA(arr,x) sza(arr) - (find(rbegin(arr),rend(arr),x)-rbegin(arr));    //sza(arr) - (int)(find (reverse(arr,(arr+sza(arr))) ,(arr+sza(arr)),x) -arr) 
  #define iV(v,x) find(v.begin(),v.end(),x)-v.begin();
  #define riV(v,x) szv(v) - (find(v.rbegin(),v.rend(),x) -v.rbegin()) // reverse vector and get index from the end then len(vec) - index = index from start (not from the end)
  #define maxE(vec) *max_element(vec.begin(),vec.end());
  #define minE(vec) *min_element(vec.begin(),vec.end());
  #define opere(a,b,c,d) ( a == b ? cout << c << "\n" : cout << d << "\n"); // if equals
  #define operm(a,b,c,d) ( a >= b ? cout << c << "\n" : cout << d << "\n");  // if more or equals
  #define isTrue(a,c,d) ( a == true ? cout << c << "\n" : cout << d << "\n");

  typedef unsigned int ui;
  typedef long long ll;
  typedef unsigned long long ull;
  typedef long double ld;
  typedef pair<int,int> pii;
  typedef pair<ll,ll> pll;
  typedef vector<pair<int,int>> vpi;
  typedef vector<int> vi;
  typedef vector<ll> vl;
  typedef vector<vector<int>> vvi;
  typedef vector<set<pii>> vspi;
  typedef map<string,string> mss;
  typedef string str;

  int main() {
    
    vpi v1 = {
      {1,2},
      {3,4},
    };
    
    each(i,v1) {
      cout << i.X << " " << i.Y << "\n";
    }
  
    vi v2 = {5,6,7,8,9,10};
    print(v2);
  
    int age1 = 17;
    int age2 = 23;
    operm(age1,18,"VALID","INVALID")
    operm(age2,18,"VALID","INVALID")
  
    int a = -123;
    int b = 0;
    int c = 1;
    bool d = true;
    isTrue(a,"YES","NO")
    isTrue(b,"YES","NO")
    isTrue(c,"YES","NO")
    isTrue(d,"YES","NO")

    vi v3 = {1,2,3,10,10,10,1,2}
    int e3 = iV(v3,1);
    int e4 = riV(v3,1);
    cout << e3 << "\n";
    cout << e4 << "\n";
      
    return 0;
  }
  ```

## Data types
### Strings
```cpp


string s = to_string(value); // convert int to string
int value = stoi(s); // convert string to int

str s = "!!!Hello!world!!!";
int n = count(s.begin(),s.end(),'!'); // can find only chars (not strings)
cr(n)

// transform all string to lower of upper case

string s1 = "abcde";

// using transform() function and ::toupper in STL
transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
// using transform() function and ::tolower in STL
transform(s2.begin(), s2.end(), s2.begin(), ::tolower);


/*check if substr in str*/
if (s1.find(s2) != std::string::npos) { // or s1.find(s2) < s1.length()
    std::cout << "found!" << '\n';
}
/* REPLACE or insert*/
// s.replace(index, delete(lenSubstr) , replaceStr);
//             |           |              |
//             |           |              *----| replaceStr - string that will be replaced insted of substring
//             |           *-------------------| length of substring 
// 		       *------------------------------| index to start delete substr an insert replaceStr

  string s = "01-del-3" , substr = "-del-" , repS = "2";
  string replaceS = s , insertBeforeS = s , inserAfterS = s;

  replaceS.replace     (replaceS.find(substr), substr.length() ,repS);
  insertBeforeS.replace(insertBeforeS.find(substr), 0 ,repS);
  inserAfterS.replace  (inserAfterS.find(substr)+substr.length(), 0 ,repS);
  
  printf("sourse string = %s | replace str  = %s\n==============\nreplace = %s\ninsert before = %s\ninsert after = %s\n",s.c_str(),repS.c_str(),replaceS.c_str(),insertBeforeS.c_str(),inserAfterS.c_str());
```

### Chars
```cpp

// chars
    char c = 'c'
    tolower(c) ;// tolower / toupper рабоатают только с символами
    (int)(c); //  такая запись получит у сивола его значение в таблице ASCII


```


### Nums
```cpp
    string s = to_string(value); // convert int to string
    int value = stoi(s); // convert string to int
    
    unsigned short res;// unsigned убирает отрицательные значения у типа и удваивает положительные
```

### Arrays And vectors
#### properties
+ declaration
  + ```cpp
    vector<int> v = {0,1,2,3,4};
    vector<char> v ;
    int arr[5] = {1,2,3,4,5};
    int arr[] = {1,2,3};
    ```
+ size
  + ```cpp
    vector<int> v = {0,1,2,3,4};
    int size = v.size()

    vector<int> v(n); // ограничить размер 1D ветора
    vector<vector<int>> (n, vector<int>(n)) // ограничить размер 2D вектора

    ```
+ Срез
  + ```cpp
    vector<int> v = {0,1,2,3,4};
    vector<int> v_copy(v.begin() , v.end()); // просто скопировать
    vector<int> v2(v.begin() , v.end()-2); // сделать срез массив
    vector<int> v2(v.begin()+2 , v.end()+5); // сделать срез массива 
    vector<int> v3(v.begin() +2, v.end()); // сделать срез массива 
    vector<int> v4(v.begin() +3 , v.end()-2); // сделать срез массива 
    ```
#### Methods
+ Sort
  + ```cpp
    sort(arr.begin(),arr.end()); // sort from small to big
    sort(arr.begin(), arr.end(), greater<int>()); // sort from big to small
    ```
+ Find max an min elemnts
  + ```cpp
    *max_element(v.begin(), v.end()) // find max el in vector
    *min_element(v.begin(), v.end()) // find min el in vector
    ```
+ find index of elemt in vector
  + ```cpp
    vector<int> v{ 1, 2, 3, 4, 5 , 6 , 7 , 8 , 9 , 10};
    auto it = find(v.begin(), v.end(), 5);
    cout << "Index of elemetnt =  " << it - v.begin() << "\n";
    ```
  
+ Check if the element is in vector
  + ```cpp
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // check if elemet 5 is in vector
    if (find(v.begin(), v.end(), 5) != v.end()) {
        cout << "Element 5 is in vector\n";
    }
    ```
+ get amount of element in array
  + ```cpp
    vi v = {1,2,1,1};
    int n = count (v.begin(),v.end(),1);
    cr(n)

  ```
    

### Set
#### properties
+ declaration
  + ```cpp

    // sets
     
    // convert string to set  нужно добавить -  #include <set>
    set<char> set_str1(str1.begin(),str1.end() );
    // conver set to string
    string str2(set_str1.begin(), set_str1.end()); 
    string str3 = string(set_str1.begin(),set_str1.end())
    ```
#### Methods
```cpp
    // print arr or vector or string or set
for (auto i : arr) {
  cout << i << " ";
}
// inset elemtnts to the a set
set<int> s;
s.insert(1);

```

### MAP

```cpp

#include <map>

map<string,vector<<int>> > test
map<int,int> mp ;
map<string,string> mp = {
  {".","0"},
  {"-.","1"},
  {"--","2"}
};

mp[100] = 3;
mp.size() // size

for (auto i : mp) { // get keys and values
  key = i.first;
  value = i.second;
}

    return 0;

```

## Языковые конструкции (циклы , if ...)
### Loops
+ for (auto i : object)
  + ```cpp
    for (auto i : map) { // get keys and values from map
      key = i.first;
      value = i.second;
    }

     for (auto i : str) { // print by char string
      cout << i << " " << "\n";
    }
    
     for (auto i : arr) { // print by element array or vector
      cout << i << " " << "\n";
    }

     for (auto i : str) { // print by char
      cout << i << " " << "\n";
    }
    ```
  
### operator 
+ ```cpp
    // aperotor
    message = (condition) ? "valid":"invalid";
    // it is also works!!
    (condition) ? cout << "valid"  : cout << "invalid" ;
    // and it is to
    cout << (1==2 ? "YES":"NO");
    
  ```

## Reading and writing data to files
+ ```cpp
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  ```
+ ```python3
def readData(filePath) :
    with open(filePath, 'r') as file: 
        l =  file.readlines()
    return l
    
def writeData (filePath,txt):
    with open(filePath, 'a') as file: 
      file.write(txt)


  ```
## ASK:


//For faster I/O in Competitive Progtamming in C++.
ios_base::sync_with_stdio(false);
cin.tie(NULL);


## Trics
+ ```cpp
  когда есть такакя задача , что ты допустим проходишь по массивы циклом и если встречается хотябы одно значение которое не удовлетворяет условию то результат будет сразу уже будет другим , то можно написать так:
  
  int main() {
  
  bool ok = true;
  for(int  i = 0; i < 3; ++i){
    for(int j = 0; j < 3; ++j){
      ok &= arr[i][j] == arr[2 - i][2 - j]; // ok = ok & ( arr[i][j] == arr[2 - i][2 - j] ) ; тоесть если правое значение НЕ БЫЛО равно true то ok всегда будут равен false и мы уже никогда не получим положиетльного ответа даже если правая часть будет равна true
    }
  }
  
  cout << (ok == true ? "YES\n" : "NO\n")
  
  }
  ```
+ нахрждение минимального и максимального без if
  + ```cpp
 		for (auto i : v)
			ans = min(ans, i);
    ```
+ забить вестор нулями без цикла
  + ```cpp
    int main() {
      int n = 5;
      vector<int> v1(n);
      for (auto i : v1) {
        cout << i <<  " ";
      }
    
      return 0;
    }
    ```
+ изящная реализация поочередности (когда допустим Вася и Ваня играют в игру и ходят по очереди (Вася - Ваня - Вася ... ) )
  + ```cpp
    // пример - задача // https://codeforces.com/problemset/problem/381/A
    // решение этой задачи есть внизу

    ll sum[2] = {0,0}; 
    int turn = 0;
    while(...) {
      if (v1 > v2) {
        sum[turn] += v1;
      } else {
        sum[turn] += v2;      
      }
      turn = 1-turn; // меняем поочередность 1-0 -> 1 ; 1-1 -> 0 
    }
    cout << sum[0] << " " << sum[1] << "\n";
    ```


## REAL TASKS

+ ```
remember how to work with lexigraphical order (just remember the way? don't think you know it)
https://codeforces.com/group/IaBD6a6QT2/contest/472375/problem/H


```


+ Брать наибольшее , метод двух указателей , жадые алгоритмы , поочередность
+ ```cpp
  // https://codeforces.com/problemset/problem/381/A
  int main() {
    int t = 0 ;
    cin >> t;
    int arr[t];

    forn(i,t) {
      cin >> arr[i];
    }

    int l = 0 ;
    int r = t-1;
    int turn = 0;

    ll sum[2] = {0,0}; // first is Sergey , second is Dima

    while(l <= r) {
      if (arr[r] > arr[l]) {
        sum[turn] += arr[r];
        r--;
      } else {
        sum[turn] += arr[l];
        l++;
        
      }

      turn = 1-turn; // 1-0 -> 1 ; 1-1 -> 0 
    }
    cout << sum[0] << " " << sum[1] << "\n";

    return 0;
  }


  ```

+  расшифровка сообщения (map+replace all)
+ ```cpp
  // B. Азбука Борзе
  // дана строка типа -.--...--
  // нужно ее расшифровать "." = 0 ; "-." = 1 ; "--" = 2
  // вывод : расшифрованная строка
  #include <bits/stdc++.h>
  
  using namespace std;
  
  int main () {
    string input ,  key , value;
    // ".":"0" , "-.":"1" , "--":"2"
    map<string,string> mp = {
        {".","0"},
        {"-.","1"},
        {"--","2"}
      };
  
      cin >> input;
    for (auto i : mp) {
      key   = i.first;
      value = i.second;
      while (input.find(key) != string::npos) { // or while( input.find(key) < input.size() )
        input.replace(input.find(key), key.length(), value);
      }
    }
    cout << input << "\n";
  
      return 0;
  
  }
  ```
+ Разложениечисла на слагаемые (string+while+list)
  + ```python
    #https://codeforces.com/problemset/problem/1352/A
      T = int(input())
    while T > 0 :
      T -= 1
      s = input()
      res = 0
      digits = []
      
      for i in range(len(s)):
        if s[i] != "0" :
          res += 1
          digits.append(s[i] + (len(s)-i-1)*"0")
      print(res)
      print(*digits)
    ```
+ Система регистрации (map,int -> string)
  + ```cpp
    // Система регистрации
    // https://codeforces.com/problemset/problem/4/C
    #include <bits/stdc++.h>
    using namespace std;
    int main() {
      long long n; string s;
      map<string,int> m = {};
      cin >> n;
      
      while (n--) {
        cin >> s;
        // s isn't in map -> we need to add it to a map
        if ( m.find(s) == m.end() ) {
          m[s] = 0;
          cout << "OK" << "\n";
        } else { // s in map -> it was later -> make number of s bigger in map and print new s 
          m[s]++;
          cout << s+to_string(m[s]) << "\n";
          }
        }
    
      return 0;
    }
    ```
+ Получить из числа степень двойки (трудная,классная, читай разбор) (два указателя,массив степеней двойки)
  + ```cpp
    // https://codeforces.com/problemset/problem/1560/D
    // https://codeforces.com/blog/entry/94009
    
    #include <bits/stdc++.h>
    using namespace std;
    
    int getFromOneStringOtherString(string s, string t) {
    	int tp = 0;
    	int sp = 0;
    	int taken = 0;
    
    	while (sp < s.length() && tp < t.length()) {
    		if(s[sp] == t[tp]) {
    			taken++;
    			tp++;
    		}
    		sp++;
    	}
    
    	return (int)s.length() - taken + (int)t.length() - taken;
    }
    
    int main() {
      vector<string> twoPowers;
    	for (long long p2 = 1; p2 <= (long long)2e18; p2 *= 2)
    		twoPowers.push_back(to_string(p2));
      
    	int t;
    	cin >> t;
    
    	while (t--) {
    		string n;
    		cin >> n;
    
    		int ans = n.length() + 1;
    		for (auto p2 : twoPowers)
    			ans = min(ans, getFromOneStringOtherString(n, p2));
    		cout << ans << '\n';
    	}
    
    	return 0;
    }
    ```
+ 1436B - Простой квадрат(теория чисел , забивание вектора нулями)
  + ```cpp
    // https://codeforces.com/problemset/problem/1436/B?
    #include <bits/stdc++.h>
    using namespace std;
    
    int main()  {
      short t; cin >> t;
      while (t--) {
        short n ; cin >> n;
        short arr[n][n];
    // sizeof(arr)/sizeof(arr[0])
    // забиваем массив нулями
        for (short  i = 0 ; i < n ;i++) {
          for (short  j = 0 ; j < n ;j++) {
              arr[i][j] = 0;
          }
        }
    
    // делаем так чтобы в каждом столбце и строке сумма была == 2 ведь 2 это простое  число
        for (short  i = 0 ; i < n ;i++) {
          arr[i][i] = 1;
          if (i+1 != n ) arr[i+1][i] = 1;
        }
    
    // в первой строке и поледнем столбце есть только одна еденица так что ставим эту еденицу в правый верхний угол
        arr[0][n-1] = 1;
    
        for (short  i = 0 ; i < n ;i++) {
          for (short  j = 0 ; j < n ;j++) {
              cout << arr[i][j] << " ";
          }
          cout << "\n";
        }
      }
    
      	return 0;
    }
    ```
+ B. Ваня и фонари (convert set -> vector , vector -> set, setprecision for double , typedef , cin to vector)
  + ```cpp
    
        // B. Ваня и фонари
    // https://codeforces.com/problemset/problem/492/B
    #include <bits/stdc++.h>
    using namespace std;
    
    typedef long long ll;
    
    int main()  {
      ll n; cin >> n;
      ll l; cin >> l ;
      double d = 0.0;
      vector<ll> v(n);
    
      for (int i = 0; i < n ; i++) {
        cin >> v[i];
      } 
    
      set<ll> sv(v.begin(), v.end());
      vector<ll> v2(sv.begin(), sv.end());
      sort(v2.begin(), v2.end());
    
      for (int i = 1 ; i < v2.size();i++) {
        double res = (v2[i] - v2[i-1]) / 2.0;
        // cout << res << endl;
        (res > d) ? d = res : d = d;
      }
    
      double res1 = v2[0] - 0.0; // расстояние от начала улица до первого фонаря должно быть >= d
      double res2 = l - v2[v2.size()-1];// расстояние от конца улицы жо последнего фонаря должно быть >= d
    
      cout << fixed << setprecision(9) << max( d,max(res1,res2) ) << "\n";
      return 0;
    }
    ```






