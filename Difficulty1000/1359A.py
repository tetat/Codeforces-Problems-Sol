# Problem Name: Berland Poker
# Problem Link: https://codeforces.com/problemset/problem/1359/A

t = int(input())
while t != 0:
    n, m, k = map(int, input().split())
    ff = min(n//k, m)
    m -= ff
    k = k-1
    ss = (m//k)
    if m%k!=0:ss = ss+1
    print(ff-ss)
    t = t-1