# O(n)
def IsPrime(n):
    d = 2
    while n % d != 0:
        d += 1
    return d == n

# O(√n)
def IsPrime(n):
    d = 2
    while d * d <= n and n % d != 0:
        d += 1
    return d * d > n


# O < O(√n)
def isPrime(n):
    if n % 2 == 0:
        return n == 2
    d = 3
    while d * d <= n and n % d != 0:
        d += 2
    return d * d > n


print(isPrime(3))