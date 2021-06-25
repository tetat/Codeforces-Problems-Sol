# Problem Name: Odd Selection
# Problem Link: https://codeforces.com/problemset/problem/1363/A

t = int(input())
while t != 0:
    n, x = map(int, input().split())
    even = 0
    odd = 0
    ar = list(map(int, input().split()))
    for i in range(0, n):
        if ar[i]%2==1:odd = odd + 1
        else: even = even + 1
    if odd==0 or ((even+odd)==x and odd%2==0) or (even==0 and x%2==0):
        print("no")
    else :
        print("yes")
    t = t - 1