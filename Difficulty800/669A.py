# Problem Name: Little Artem and Presents
# Problem Link: https://codeforces.com/problemset/problem/669/A

n = int(input())
ans = (n//3)*2
if n%3!=0:ans = ans + 1
print(ans)