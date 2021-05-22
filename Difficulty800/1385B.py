# Problem Name: Restore the Permutation by Merger
# Problem Link: https://codeforces.com/problemset/problem/1385/B

t = int(input())
while t != 0:
    n = int(input())
    ar = list(map(int, input().split()))
    mark = [0]*(n+1)
    for i in range(0, len(ar)):
        if mark[ar[i]]==0:
            print(ar[i], end=' ')
        mark[ar[i]] += 1
    print("")
    t -= 1