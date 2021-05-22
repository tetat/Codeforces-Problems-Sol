# Problem Name: Fraction
# Problem Link: https://codeforces.com/problemset/problem/854/A

n = int(input())
d = int(n/2)
if n%2==1:
    print(d, d+1)
else :
    if d%2==0: print(d-1, d+1)
    else :print(d-2, d+2)