# Problem Name: Phoenix and Balance
# Problem Link: https://codeforces.com/problemset/problem/1348/A

t = int(input())
while t != 0:
	n = int(input())
	a = []
	d = (n//2)-1
	tm = n
	p = 2
	while tm != 0:
		a.append(p)
		p += p
		tm = tm - 1
	ff = 0
	for i in range(0, d):
		ff += a[i]
	ff += a[n-1]
	ss = 0
	for i in range(0, n):
		ss += a[i]
	ss -= ff
	print(abs(ff-ss))
	t = t - 1