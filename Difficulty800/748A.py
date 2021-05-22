# Problem Name: Santa Claus and a Place in a Class
# Problem Link: https://codeforces.com/problemset/problem/748/A

n, m, k = map(int, input().split())
L = int(k/(m+m))
if k%(m+m)!=0:L = L + 1
D = (L-1)*(m+m) + 1
if k%2==0:D = D + 1
D = int((k-D)/2) + 1
st = "L"
if k%2==0:st = "R"
print(L, D, st)