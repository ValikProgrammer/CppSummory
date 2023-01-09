## files
```cpp
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
```


```python


def readData(filePath) :
    with open(filePath, 'r') as file: 
        l =  file.readlines()
    return l
    
def writeData (filePath,txt):
    with open(filePath, 'a') as file: 
      file.write(txt)


```

## НОД :

```cpp


unsigned int greatest_common_divisor(unsigned int a, unsigned int b) {
  if (a % b == 0)
    return b;
  if (b % a == 0)
    return a;

  if (a > b)
    return greatest_common_divisor(a%b, b);
  return greatest_common_divisor(a, b%a);
}


```

## НОК 

```cpp
unsigned int least_common_multiple(unsigned int a, unsigned int b) {
  return (a*b)/greatest_common_divisor(a,b);
}

```


## ДП

```python

"""
найти наибольшую обшею подпоследорвательность строк
"""

def dpfunc(s1,s2):
    n = len(s1)
    m = len(s2)

    dp = [[0]*(m+1) for i in range(n+1)]
    # dp[0][0] = 0
    p  = [[None]*(m+1) for i in range(n+1)]

    for i in range(1,n+1):
        for j in range(1,m+1):
            if s1[i-1] == s2[j-1]:
                dp[i][j] = dp[i-1][j-1]+1 # почум +1 ? наверное если больше не будет обших значений то чтоб не было нуля ставиться 1
                p[i][j] = (i-1,j-1,s1[i-1])
            else:
                # dp[i][j] = max(dp[i-1][j],dp[i][j-1])
                if dp[i-1][j] > dp [i][j-1]:
                    dp[i][j] = dp[i-1][j] 
                    p[i][j] = (i-1,j,'')
                else:
                    dp[i][j] = dp[i][j-1] 
                    p[i][j] = (i,j-1,'')

    ans = ''
    cur = p[n][m]
    while cur is not None:
        ans += cur[2] # индекс строки в нашем кортеже
        cur = p[cur[0]][cur[1]] # предыщие состояния
    
    return ans[::-1]

s1 = "abacaba"
s2 = "abrcb"
print(dpfunc(s1,s2))



```

## BIN SEARCH


```cpp


int i = 0, l = n-1;
while (i <= b) {
    int k = (i+l)/2;
    if (array[k] == x) {
    // x найден в позиции с индексом k
    }

    if (array[k] < x) i = k+1;
    else l = k-1;
}



```

## прост множители 

```cpp

int n, div = 2;

  vector<int> prostyeMnojitely ;
  while (n > 1) {
    while (n % div == 0) {
      n = n / div;
      prostyeMnojitely.push_back(div);
    }
    div++;
  }
  
```


## eratosphen


```cpp
	int n = 1000000;
	vector<int> sieve (n);
	for (int x = 2; x*x <= n; x++) {
		if (sieve[x]) continue;
		for (int k = 2*x; k <= n; k += x) {
			sieve[k] = 1;
		}
		
	}
	
	sieve[0] = sieve[1] = 1;
    

```