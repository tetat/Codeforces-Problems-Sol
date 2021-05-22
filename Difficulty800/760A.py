# Problem: Petr and a calendar
# Link: https://codeforces.com/problemset/problem/760/A

m, d = map(int, input().split())
if m==1:
    m = (d-1)+31
elif m==2:
    m = (d-1)+28
elif m==3:
    m = (d-1)+31
elif m==4:
    m = (d-1)+30
elif m==5:
    m = (d-1)+31
elif m==6:
    m = (d-1)+30
elif m==7:
    m = (d-1)+31
elif m==8:
    m = (d-1)+31
elif m==9:
    m = (d-1)+30
elif m==10:
    m = (d-1)+31
elif m==11:
    m = (d-1)+30
else: 
    m = (d-1)+31
ans = int(m/7)
if m%7!=0: ans = ans + 1
print(ans)