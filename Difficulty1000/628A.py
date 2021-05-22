# Problem Name: Tennis Tournament
# Problem Link: https://codeforces.com/problemset/problem/628/A

n, b, p = map(int, input().split())
tow = n*p
bot = 0
while n>1:
  ex = n%2
  n = n - ex
  bot += n*b + (n//2)
  n = n // 2
  n = n + ex
print(bot, tow)