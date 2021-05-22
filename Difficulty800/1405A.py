# Problem Name: Permutation Forgery
# Problem Link: https://codeforces.com/problemset/problem/1405/A

t = int(input())
while t != 0:
    n = int(input())
    ar = list(map(int, input().split()))
    ar.reverse()
    for i in range(0, n):
        print(ar[i], end=' ')
    print("")
    t -= 1