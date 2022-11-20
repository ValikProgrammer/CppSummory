### Сложные , алгоритмы
+ https://codeforces.com/problemset/problem/230/B


### Легкие , но нужно догадаться

+ https://codeforces.com/contest/1374/problem/C
+ https://codeforces.com/problemset/problem/1433/A
+ https://codeforces.com/problemset/problem/1703/A


### Жадные алгоритмы 
+ https://codeforces.com/problemset/problem/1367/B   (легкая)
+ https://codeforces.com/problemset/problem/1353/B ( посложнее)


def euclidus(numerator, denominator):
  if numerator == denominator:
    return(numerator)
  else:
    if numerator > denominator:
      return euclidus(numerator - denominator, denominator)
    else:
      return euclidus(numerator, denominator - numerator)

print(euclidus(9,6))




