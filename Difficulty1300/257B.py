# Problem Name: Playing Cubes
# Problem Link: https://codeforces.com/problemset/problem/257/B

a, b = map(int, input().split())
if a < b:a, b = b, a
print(a-1, b)