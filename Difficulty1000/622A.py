# Problem Name: Infinite Sequence
# Problem Link: https://codeforces.com/problemset/problem/622/A

n = int(input())
L = 0
R = n//2
cut = 0
while L <= R:
    mid = L + (R-L)//2
    if (mid*(mid+1))//2 < n:
        cut = (mid*(mid+1))//2
        L = mid+1
    else: R = mid-1
print(n-cut)