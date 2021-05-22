# Problem Name: Arpa and a research in Mexican wave
# Problem Link: https://codeforces.com/problemset/problem/851/A

n, k, t = map(int, input().split())
#print(n, k, t)
if n < t:
    print(k - (t-n))
else:
    if k < t: print(k)
    else: print(t)