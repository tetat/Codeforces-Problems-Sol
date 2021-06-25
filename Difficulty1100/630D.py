# Problem Name: Hexagons!
# Problem Link: https://codeforces.com/problemset/problem/630/D

ans = 1
n = int(input())
if 0<n:
    n = (n*(n+1))//2
    ans += n*6
print(ans)