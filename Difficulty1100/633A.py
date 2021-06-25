# Problem Name: Ebony and Ivory
# Problem Link: https://codeforces.com/problemset/problem/633/A

a, b, c = map(int, input().split())
ans = "No"
i = 0
while i*a<=c:
    if (c-(i*a))%b==0:ans = "Yes"
    i = i + 1
i = 0
while i*b<=c:
    if (c-(i*b))%a==0:ans = "Yes"
    i = i + 1
print(ans)