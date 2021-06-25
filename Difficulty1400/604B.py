# Problem Name: More Cowbell
# Problem Link: https://codeforces.com/problemset/problem/604/B

n, k = map(int, input().split())
ar = list(map(int, input().split()))
ans = int(ar[n-1])
i = int(0)
L = int(0)
R = int(n-((k+k)-n)-1)
while L < R:
    ans = max(ans, ar[L]+ar[R])
    L += 1
    R -= 1
print(ans)