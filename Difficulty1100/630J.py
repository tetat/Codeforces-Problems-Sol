# Problem Name: Divisibility
# Problem Link: https://codeforces.com/problemset/problem/630/J

def test():
  num = -1
  for i in range(10, 3000):
    ok = 1
    for j in range(2, 10):
      if i%j!=0:
        ok = 0
        break
    if ok==1:
      num = i
      break
  return num
d = test()
#print(d)
n = int(input())
print(n // d)