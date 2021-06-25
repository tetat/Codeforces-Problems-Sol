# Problem Name: Selection of Personnel
# Problem Link: https://codeforces.com/problemset/problem/630/F

def fact(n):
    ret = 1
    for i in range(1, n+1):
        ret = ret * i
    return ret
n = int(input())
five = 5
six = 6
seven = 7
ff = fact(n)
ans = ff//(fact(n-five)*fact(five))
ans += ff//(fact(n-six)*fact(six))
ans += ff//(fact(n-seven)*fact(seven))
print(ans)