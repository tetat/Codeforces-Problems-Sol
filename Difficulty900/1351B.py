# Problem Name: Square?
# Problem Link: https://codeforces.com/problemset/problem/1351/B

t = int(input())
for i in range(t):
  a, b = map(int, input().split())
  c, d = map(int, input().split())
  if a==c and b+d==a:
    print("yes")
  elif a==d and b+c==a:
    print("yes")
  elif b==c and a+d==b:
    print("yes")
  elif b==d and a+c==b:
    print("yes")
  else:
    print("no")