# Problem Name: Lucky Numbers
# Problem Link: https://codeforces.com/problemset/problem/630/C

n = int(input())
ans = 0
p = 2
for i in range(0, n):
  ans += p
  p += p
print(ans)