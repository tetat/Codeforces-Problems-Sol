# Problem Name: PolandBall and Hypothesis
# Problem Link: https://codeforces.com/problemset/problem/755/A

n = int(input())
if n%2 and n>1: n = 1
else: 
    if n==1:n = 3
    elif n==2: n = 4
    else: n = n - 2
print(n)