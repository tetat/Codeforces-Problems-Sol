# Problem Name: Friends Meeting
# Problem Link: https://codeforces.com/problemset/problem/931/A

a = int(input())
b = int(input())
d = abs(a-b)
mov = int(d/2)
#print(mov)
ans = int((mov*(mov+1))/2)
if d%2==1:
    mov = mov + 1
ans = ans + int((mov*(mov+1))/2)
#print(mov)
print(ans)