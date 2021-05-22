# Problem Name: LCM Problem
# Problem Link: https://codeforces.com/problemset/problem/1389/A

t = int(input())
while t != 0:
    l, r = map(int, input().split())
    if l+l <= r:
        print(l, l+l)
    else:
        print("-1 -1")
    t -= 1