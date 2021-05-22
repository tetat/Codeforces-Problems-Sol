# Problem Name: Maximum GCD
# Problem Link: https://codeforces.com/problemset/problem/1370/A

t = int(input())
while t != 0:
    n = int(input())
    if n%2==1:
        n -= 1
    print(n//2)
    t -= 1