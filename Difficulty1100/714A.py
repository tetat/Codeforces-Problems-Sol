# Problem Name: Meeting of Old Friends
# Problem Link: https://codeforces.com/problemset/problem/714/A

l1, r1, l2, r2, k = map(int, input().split())
ans = 0
L = max(l2, l1)
R = min(r2, r1)
if (L<=R):
    ans = R - (L-1)
    if L<=k and R>=k:ans = ans - 1
print(ans)